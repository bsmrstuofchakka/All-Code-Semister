#include <iostream>
#include <mpi.h>
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdint.h>

#define NUM_ROWS_A 3 
#define NUM_COLUMNS_A 2 
#define NUM_ROWS_B 2 
#define NUM_COLUMNS_B 3
#define MASTER_TO_SLAVE_TAG 1 
#define SLAVE_TO_MASTER_TAG 4 

double mat_a[NUM_ROWS_A][NUM_COLUMNS_A],mat_b[NUM_ROWS_B][NUM_COLUMNS_B],mat_result[NUM_ROWS_A][NUM_COLUMNS_B]; 
double start_time,end_time; 
int i, j, k,rank,size,low_bound,upper_bound,portion; 
MPI_Status status; 
MPI_Request request; 

void makeAB()
{
	for (i = 0; i < NUM_ROWS_A; i++)
	{

		for (j = 0; j < NUM_COLUMNS_A; j++) 
		{
			mat_a[i][j] = i + j;
		}

	}
	for (i = 0; i < NUM_ROWS_B; i++)
	{
		for (j = 0; j < NUM_COLUMNS_B; j++)
		{
			mat_b[i][j] = i*j;
		}
	}

}
void printArray()
{
	    printf("Matrix of A  \n");
		for (i = 0; i < NUM_ROWS_A; i++) 
		{
		printf("\n");

			for (j = 0; j < NUM_COLUMNS_A; j++)
			{
				printf("%8.2f ", mat_a[i][j]);
			}
		}
		printf("\n\n\n");
		printf("Matrix of B  \n");
		for (i = 0; i < NUM_ROWS_B; i++)
		{
			printf("\n");
			for (j = 0; j < NUM_COLUMNS_B; j++)
			{
				printf("%8.2f ", mat_b[i][j]);
			}
		}
		printf("\n\n\n");
		printf("Multiplication Matrix of A and B\n ");
		for (i = 0; i < NUM_ROWS_A; i++)
		{
		printf("\n");
			for (j = 0; j < NUM_COLUMNS_B; j++)
			{
				printf("%8.2f ", mat_result[i][j]);
			}
		}
	    printf("\n\n");
}
int main(int argc, char *argv[])
{	
		MPI_Init(&argc, &argv); 
		MPI_Comm_rank(MPI_COMM_WORLD, &rank); 
		MPI_Comm_size(MPI_COMM_WORLD, &size);
		
		if (rank == 0) 
		{
			
			makeAB();
			start_time = MPI_Wtime();
			for (i = 1; i < size; i++) 
			{
				portion = (NUM_ROWS_A / (size - 1)); 
				low_bound = (i - 1) * portion;
				if (((i + 1) == size) && ((NUM_ROWS_A % (size - 1)) != 0))
				{

					upper_bound = NUM_ROWS_A;
				} 
				else 
				{
					upper_bound = low_bound + portion; 
				}
				MPI_Isend(&low_bound, 1, MPI_INT, i, MASTER_TO_SLAVE_TAG,MPI_COMM_WORLD, &request);
				MPI_Isend(&upper_bound, 1, MPI_INT, i, MASTER_TO_SLAVE_TAG + 1,MPI_COMM_WORLD, &request);
				MPI_Isend(&mat_a[low_bound][0], (upper_bound - low_bound) * NUM_COLUMNS_A,MPI_DOUBLE, i, MASTER_TO_SLAVE_TAG + 2, MPI_COMM_WORLD, &request);

			}
			
		}

			MPI_Bcast(&mat_b, NUM_ROWS_B*NUM_COLUMNS_B, MPI_DOUBLE, 0,MPI_COMM_WORLD);
			if (rank > 0)
			{
				MPI_Recv(&low_bound, 1, MPI_INT, 0, MASTER_TO_SLAVE_TAG,MPI_COMM_WORLD, &status);
				MPI_Recv(&upper_bound, 1, MPI_INT, 0, MASTER_TO_SLAVE_TAG + 1,MPI_COMM_WORLD, &status);
				MPI_Recv(&mat_a[low_bound][0], (upper_bound - low_bound) * NUM_COLUMNS_A,MPI_DOUBLE, 0, MASTER_TO_SLAVE_TAG + 2, MPI_COMM_WORLD, &status);
			

				for (i = low_bound; i < upper_bound; i++)
				{
					for (j = 0; j < NUM_COLUMNS_B; j++)
					{
							for (k = 0; k < NUM_ROWS_B; k++)
							{
								mat_result[i][j] += (mat_a[i][k] * mat_b[k][j]);
					        }
				    }
			    }
				
				MPI_Isend(&low_bound, 1, MPI_INT, 0, SLAVE_TO_MASTER_TAG,MPI_COMM_WORLD, &request);
				MPI_Isend(&upper_bound, 1, MPI_INT, 0, SLAVE_TO_MASTER_TAG + 1,MPI_COMM_WORLD, &request);
				MPI_Isend(&mat_result[low_bound][0], (upper_bound - low_bound) * NUM_COLUMNS_B,MPI_DOUBLE, 0, SLAVE_TO_MASTER_TAG + 2, MPI_COMM_WORLD, &request);
			}
			
		if (rank == 0)
		{
		
			for (i = 1; i < size; i++)
			{
				MPI_Recv(&low_bound, 1, MPI_INT, i, SLAVE_TO_MASTER_TAG,MPI_COMM_WORLD, &status);
				MPI_Recv(&upper_bound, 1, MPI_INT, i, SLAVE_TO_MASTER_TAG + 1,MPI_COMM_WORLD, &status);
				MPI_Recv(&mat_result[low_bound][0], (upper_bound - low_bound) *NUM_COLUMNS_B, MPI_DOUBLE, i, SLAVE_TO_MASTER_TAG + 2, MPI_COMM_WORLD,&status);
			}
			end_time = MPI_Wtime();
			printf("\nRunning Time = %f\n\n", end_time - start_time);
		    printArray();
		}
		MPI_Finalize(); 
		return 0;
}