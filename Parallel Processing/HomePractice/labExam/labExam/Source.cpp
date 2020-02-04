#include<iostream>
#include<mpi.h>
#define MASTER 0

using namespace std;

void main(int argc, char *argv[])
{
	int numtasks=4,process=4, taskid,len,rc,version,subversion,data=5;
	MPI_Status status;
	char hostname[MPI_MAX_PROCESSOR_NAME];
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
	MPI_Comm_rank(MPI_COMM_WORLD, &taskid);

	MPI_Get_processor_name(hostname, &len);
	MPI_Get_version(&version,&subversion);
	printf("Processor name:%s\n Process:%d\n Rank:%d\n Version:%d\n",hostname,numtasks,taskid,version);



/*
	if(taskid==0)
	{
	    
			MPI_Send(&data,1,MPI_INT,3,1,MPI_COMM_WORLD);
			data=4;
		   MPI_Send(&data,1,MPI_INT,3,2,MPI_COMM_WORLD);
		   		printf("Data sent successfully to Node %d from Node %d",data,data);

		
	}
	else
	{
		int data2;
		MPI_Recv(&data2,1,MPI_INT,1,MPI_ANY_TAG,MPI_COMM_WORLD,&status);
		printf("Receive data from  %d ",data2);
	}
	
*/


	MPI_Finalize();
	//system("pause");
}
