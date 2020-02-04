#include<iostream>
#include<mpi.h>
#define MASTER 0

using namespace std;

void main(int argc, char *argv[])
{
	int numtasks, taskid,len,rc;
	char hostname[MPI_MAX_PROCESSOR_NAME];
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
	MPI_Comm_rank(MPI_COMM_WORLD, &taskid);
	MPI_Get_processor_name(hostname, &len);
	printf("Number of tasks=%d My rank= %d Running on %s\n",numtasks, taskid,hostname);

	if(taskid==MASTER)
		printf("Master: Number of MPI tasks is: %d\n",numtasks);

	MPI_Finalize();
	//system("pause");
}
