#include<stdio.h>
int input[20]={7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1};
int sol[3]={7,0,1};
int status[3]={0,1,2};
int check()
{ 
        int i;
        int min=status[0];
        for( i=0;i<3;i++)
        {
                if(min>status[i]) 
                min=status[i];
        }
        for(i=0;i<3;i++)
        {
                if(min==status[i]) 
                return i; 
        }
}
int present(int n)
{
        int i;
        for( i=0;i<3;i++)
        {
                if(sol[i]==n)
                return 0;
        }
        return 1;
}

void main()
{
        int i,j,m,n;
        int hit=0;
        int fault=0;
        printf("Number of frames is 3 \n");
        for(i=0;i<3;i++)
        {
                printf("%d",sol[i]);
        }

        printf("\n");  
        for(j=3;j<=19;j++)
        {
                for(i=0;i<3;i++)
                {
                        if(present(input[j]))
                        {
                                n=check();
                                sol[n]=input[j];
                                status[n]=j;
                        }
                        else
                        {
                                hit++;
                                for(i=0;i<3;i++)
                                {
                                        if(input[j]==sol[i])
                                        status[i]=j;      
                                 }
                        }
                        for(i=0;i<3;i++)
                        {
                                printf("%d",sol[i]);
                        }
                        printf("\n"); 
                }
        }
        for(i=0;i<3;i++)
        printf("%d",sol[i]);
        fault=20-hit;
        printf("\nNo. of hits  - %d \n",hit);
        printf("No. of faults - %d",fault); 
}
