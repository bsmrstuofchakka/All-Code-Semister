#include<stdio.h>
void main()
{
	int A[20], N, Temp, i, j;
	clrscr();
	printf(“\n\n\t ENTER THE NUMBER OF TERMS…: “);
	scanf(“%d”,&amp;N);
	printf(“\n\t ENTER THE ELEMENTS OF THE ARRAY…:”);
	for(i=0; i&lt;N; i++)
	{
		scanf(“\n\t\t%d”, &amp;A[i]);
	}
	for(i=0; i&lt;N-1; i++)
		for(j=0; j&lt;N-i;j++)
			if(A[j]&gt;A[j+1])
			{
				Temp = A[j];
				A[j] = A[j+1];
				A[j+1] = Temp;
			}
	printf(“\n\tTHE ASCENDING ORDER LIST IS…:\n”);
	for(i=0; i&lt;N; i++)
		printf(“\n\t\t\t%d”,A[i]);
	getch();
}
