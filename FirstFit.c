#include<stdio.h>
int block[10],process[10],visited[0],pb[10];

void main()
{
    	int n,m,i,j,frag[10],executed[10];
    	printf("Enter no. of process\n");
    	scanf("%d",&n);
    	printf("Enter no. of block\n");
    	scanf("%d",&m);
    	printf("Enter the value memory blocks\n");

    	for(i=0;i<m;i++)
    	{
            	scanf("%d",&block[i]);

    	}
    	printf("Enter the memory consumed by each process\n");

    	for(i=0;i<n;i++)
    	{
            	scanf("%d",&process[i]);
    	}

    	for(i=0;i<n;i++)
    	{
            	for(j=0;j<m;j++)
            	{
                    	if(process[i]<=block[j] && visited[j]!=1)
                    	{
                            	frag[j]=block[j]-process[i];
                            	visited[j]=1;
                            	executed[i]=1;
                            	pb[i]=j+1;
                            	break;
                    	}

            	}
    	}

    	for(i=0;i<n;i++)
    	{
            	if(executed[i]==1)
            	{
                    	printf("P%d is executed\n",i+1);
            	}
            	else
            	{
                    	printf("P%d is not executed\n",i+1);
            	}
    	}

    	for(j=0;j<m;j++)
    	{
            	if(visited[j]==1)
            	{
                    	printf("Block %d is used\n",(j+1));
                    	printf("Fragmented Memory in block %d is %d\n",j+1,frag[j]);
            	}
            	else
            	{
                    	printf("Block %d is not used\n",j+1);
            	}
    	}
    	printf("Process \tSize \tBlock \tfragmented Memory\n");



    	for(i=0;i<n;i++)
    	{
               	 
            	if(pb[i]<=0)
                    	printf("p%d\t%d\tNA \t-\n",i+1,process[i]);
            	else
                    	printf("p%d\t%d\t%d\t%d\n",i+1,process[i],pb[i],frag[pb[i]-1]);
    	}
}
