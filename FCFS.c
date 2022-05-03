#include<stdio.h>
void main()
{

	int g[20],n,bt[10],at[10],i,j;
	float wt[10],tat[10],awt=0,atat=0;
	printf("enter the no. of processes: ");
	scanf("%d",&n);
	printf("enter arrival time:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	printf("enter burst time:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	g[0]=0;
	for(i=1;i<n+1;i++)
	{
		g[i]=g[i-1]+bt[i-1];
	}
	printf("gantt chart\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",g[i]);
	}
	for(i=0;i<n;i++)
	{
		awt=awt+g[i]-at[i];
	}
	for(i=0;i<n;i++)
	{
		atat=atat+g[i+1]-at[i];
	}
	awt=awt/n;
	atat=atat/n;
	printf("\naverage waiting time: %fms\n",awt);
	printf("\naverage turn around time: %fms\n",atat);
}
