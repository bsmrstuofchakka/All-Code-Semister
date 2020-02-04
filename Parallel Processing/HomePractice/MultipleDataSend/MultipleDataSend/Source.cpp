#include <iostream>
#include <mpi.h>
using namespace std;
void main (int argc, char *argv[])
{
	int rank,n,data=10;
	MPI_Init(&argc, &argv);
	MPI_Status status;
	MPI_Comm_size(MPI_COMM_WORLD,&n);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);

	if(rank==0)
	{
		for(int i=1;i<n;i++)
		{
			MPI_Send(&data,1,MPI_INT,i,1,MPI_COMM_WORLD);
		}
	}
	else
	{
		MPI_Recv(&data,1,MPI_INT,0,1,MPI_COMM_WORLD,&status);
		printf("Receive data:  %d\n To Processor: %d", data,rank);
	}
	
	MPI_Finalize();
}
