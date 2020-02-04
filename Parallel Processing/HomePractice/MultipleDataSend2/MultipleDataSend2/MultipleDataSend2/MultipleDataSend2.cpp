// MultipleDataSend2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}*/

#include <iostream>
#include <mpi.h>
using namespace std;
void main (int argc, char *argv[])
{
	MPI_Init(&argc, &argv);
	int token;
	int world_rank;
	int word_size;
	MPI_Status status;
	MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &word_size); 

	if(world_rank!=0)
	{
		MPI_Recv(&token,1,MPI_INT,world_rank-1,0,MPI_COMM_WORLD,MPI_STATUSES_IGNORE);
		printf("Process %d receive token %d from process %d\n",world_rank,token,world_rank-1);
	}
	else
	{
		token=-1;
		MPI_Send(&token,1,MPI_INT,(world_rank+1)%word_size,0,MPI_COMM_WORLD);

		if(world_rank==0)
		{
			MPI_Recv(&token,1,MPI_INT,word_size-1,0,MPI_COMM_WORLD,MPI_STATUSES_IGNORE);
			printf("Process %d receive token %d from process %d");
		}

	}
	
	MPI_Finalize();
}
