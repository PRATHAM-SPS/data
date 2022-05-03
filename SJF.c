#include<stdio.h>

struct process
{
  int pno,at,bt,et,tat,wt;
}p[4],temp;

void main()
{
  int i,j;
  double avgtat,avgwt,t_tat=0,t_wt=0;
  
  printf("\n\nEnter arrival time for processes:\n");
  for(i=0;i<4;i++)
  {
    printf("P%d: ",i+1);
    scanf("%d",&p[i].at);
    p[i].pno=i+1;
  }
  
  printf("\n\nEnter burst time for processes:\n");
  for(i=0;i<4;i++)
  {
    printf("P%d: ",i+1);
    scanf("%d",&p[i].bt);
  }
  for(i=1;i<4;i++)
  {
    for(j=1;j<4-i;j++)
    {
      if(p[j].bt>p[j+1].bt)
      {
        temp=p[j+1];
        p[j+1]=p[j];
        p[j]=temp;
        
      }
    }
  }
  p[0].wt=0;
  p[0].et=0;
  for(i=0;i<4;i++)
  {
  p[i+1].et=p[i].et+p[i].bt;
  p[i].wt=p[i].et-p[i].at;
  t_wt=t_wt+p[i].wt;
  p[i].tat=p[i+1].et-p[i].at;
  t_tat=t_tat+p[i].tat;
  }
  avgtat=t_tat/4;
  avgwt=t_wt/4;
  printf("\n\nProcess     A.T.      B.T.      C.T.      T.A.T.    W.T.");
   for(i=0;i<4;i++)
  { 
    printf("\nP %d %d %d %d %d %d" ,p[i].pno, p[i].at, p[i].bt, p[i].et, p[i].tat, p[i].wt);
  };
  printf("\n\nAverage T.A.T. is %lf",avgtat);
  printf("\n\nAverage W.T. is %lf\n\n",avgwt);
}
