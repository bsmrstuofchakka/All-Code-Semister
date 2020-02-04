#include "mpi.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MASTER 0
using namespace std;

int main(int argc, char *argv[])
{
	int rank, size;
	double x[10];
	MPI_Status status;

	MPI_Init(&argc, &argv);
	//char hostname[MPI_MAX_PROCESSOR_NAME];

	MPI_Comm_size(MPI_COMM_WORLD, &size);

	MPI_Comm_rank(MPI_COMM_WORLD, &rank);




	//MPI_Get_processor_name(hostname, @len);
	//printf("Hello form task %d");

	if(rank==0)
	{
		for(int i=0;i<10;i++){
			x[i]=0.2*i;
		}
		MPI_Send(&x,10,MPI_DOUBLE,1,1,MPI_COMM_WORLD);
		
		
		
	}

	if(rank==1)
	{
		
		MPI_Recv(x,10,MPI_DOUBLE,0,1,MPI_COMM_WORLD, &status);
		for(int i=0;i<10;i++){
			cout<<x[i]<<endl;
	    
		}
	}


	
	MPI_Finalize();
	
}