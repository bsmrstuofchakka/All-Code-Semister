#include "mpi.h"
#include<stdio.h>
#include<stdlib.h>
#define MASTER 0

int main(int argc, char *argv[])
{
	int numtasks, rank, len;
	MPI_Status status;
	MPI_Init(&argc, &argv);
	//char hostname[MPI_MAX_PROCESSOR_NAME];
	//MPI_Comm_size(MPI_COMM_WORLD, &numtasks);

	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	//MPI_Get_processor_name(hostname, @len);
	//printf("Hello form task %d");

	if(rank==0)
	{
		int x=0;
		MPI_Send(&x,1,MPI_INT,1,1,MPI_COMM_WORLD);
		int a=20;
		MPI_Send(&a,1,MPI_INT,1,2, MPI_COMM_WORLD);

		
	}

	if(rank==1)
	{
		int y;
		MPI_Recv(&y,1,MPI_INT,0,1,MPI_COMM_WORLD, &status);
		printf("Receive Data %d", y);

	}

	
	MPI_Finalize();
	
}