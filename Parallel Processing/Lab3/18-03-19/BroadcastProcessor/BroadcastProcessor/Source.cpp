#include <iostream>
#include <mpi.h>
using namespace std;
void main (int argc, char *argv[])
{
	

	int data=0;
	int n,rank;
	MPI_Status status;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD,&n);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	
	if(rank==0)
	{
		 data=77;
	}
	printf("Before Bcast Processor: %d  and send data: %d\n",rank,data);
		MPI_Bcast(&data,1,MPI_INT,0,MPI_COMM_WORLD);




	
	
		
		printf("After Bcast Processor: %d Receive Data: %d\n",rank,data);
	


	MPI_Finalize();
}