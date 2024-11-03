//calculating the waiting time and turn around time when all the processes are arriving at the same time based on PRIORITY
#include<stdio.h>
int main()
{
        int n;
        printf("Enter the number of processes:");
        scanf("%d",&n);
        int p[n],bt[n],wt[n],tat[n],pr[n];
	printf("Enter the priority for %d processes\n",n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&pr[i]);
	}
        printf("Enter thr burst time for %d processes\n",n);
        for(int i=1;i<=n;i++)
        {
                p[i]=i;
                scanf("%d",&bt[i]);
        }
        //sorting
        int temp;
        for(int i=1;i<=n;i++)
        {
                for(int j=i+1;j<=n;j++)
                {
                        if(pr[i]>pr[j])
                        {
                                temp=pr[i];
				pr[i]=pr[j];
				pr[j]=temp;
				
				temp=bt[i];
                                bt[i]=bt[j];
                                bt[j]=temp;

                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                        }
                }
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
                printf("\nProcess%d	%d     %d      %d      %d\n",p[i],pr[i],bt[i],wt[i],tat[i]);
        }
}

