//calculating the waiting time and turn around time when all the processes are arriving at the same time using FCFS
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of processes:");
	scanf("%d",&n);
	int bt[n],wt[n],tat[n];
	printf("Enter thr burst time for %d processes\n",n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&bt[i]);
	}
	//calculate the waiting time
	wt[1]=0;
	for(int i=2;i<=n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
	}
	//calculate the turn around time
	for(int i=1;i<=n;i++)
	{
		tat[i]=bt[i]+wt[i];
	}
	//printing
	for(int i=1;i<=n;i++)
	{
		printf("\nProcess%d	%d	%d	%d\n",i,bt[i],wt[i],tat[i]);
	}
}
