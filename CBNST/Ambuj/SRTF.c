#include<stdio.h>
#include <stdlib.h>
#include<limits.h>

struct Process{
	int pid;
	int at;
	int bt;
	int ct;
	int tat;
	int wt;
	int rt;
	int st;
};
int compare (const void *p1, const void *p2)
{

    int a=((struct Process *)p1)->at;
    int b=((struct Process *)p2)->at;

  	if (a<b)
      	return -1;
   	else
      	return 1;
  	
}
int main()
{
	int n;
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	struct Process p[n];
	
	for(int i=0;i<n;i++)
	{
		
		printf("For Process %d ",i+1);
        p[i].pid=i+1;
		
		
		printf("Enter the value of AT and BT: ");
		scanf("%d %d",&p[i].at,&p[i].bt);
	}
	qsort ((void *)p, n, sizeof(struct Process), compare); 
	int tt=0,rem[n];
	int min=INT_MAX,pos=0,t=0,flag=0,comp=0;
	for(int i=0;i<n;i++)
	{
		rem[i]=p[i].bt;
	}
	while(comp<n)
	{
		for(int i=0;i<n;i++)
		{
			if(p[i].at<=t&& rem[i]<=min&&rem[i]>0)
			{
				min=rem[i];
				pos=i;
				flag=1;
			}
		}
		if(flag==0)
		{
			t++;
			continue;
		}
		rem[pos]--;
		min=rem[pos];
		if(min==0)
			min=INT_MAX;
		
		if(rem[pos]==0)
		{
			comp++;
            	flag=0;
           	p[pos].ct=t+1;
  
               p[pos].wt=p[pos].ct-p[pos].bt-p[pos].at;
  
            if (p[pos].wt < 0)
                p[pos].wt=0;
        } 
        t++;
	}
	printf("PID\tAT\tBT\tCT\tWT\tRemT\n");
	for(int i=0;i<n;i++)
	{
		printf("P%d\t%d\t%d\t%d\t%d\t%d\n",i+1,p[i].at,p[i].bt,p[i].ct,p[i].wt,rem[i]);
	}
	return 0;	
			
}
