#include <iostream>
#include <mpi.h>
using namespace std;
void main (int argc, char *argv[])
{
	

	int data=10;
	int n,rank;
	MPI_Status status;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD,&n);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	
	if(rank==0)
	{
		for(int i=1;i<n;i++)
		{
			MPI_Send(&data,1,MPI_INT,i,1,MPI_COMM_WORLD);
			printf("processor 0 send data %d to %d\n",data,i);
			data++;

		}
		//MPI_Send(&data,1,MPI_INT,5,1,MPI_COMM_WORLD);

	}

	else
	{
		MPI_Recv(&data,1,MPI_INT,MPI_ANY_SOURCE,MPI_ANY_TAG,MPI_COMM_WORLD,&status);
		printf("Receive Data: %d to processor: %d\n",data,rank);
	}
/*
	else if(rank==2)
	{
		MPI_Recv(&data,1,MPI_INT,0,1,MPI_COMM_WORLD,&status);
		printf("Receive Data: %d to processor: %d\n",data,rank);
	}
	else if(rank==3)
	{
		MPI_Recv(&data,1,MPI_INT,0,1,MPI_COMM_WORLD,&status);
		printf("Receive Data: %d to processor: %d\n",data,rank);
	}
	*/


	MPI_Finalize();
}