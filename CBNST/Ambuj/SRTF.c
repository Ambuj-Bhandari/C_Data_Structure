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
	int n,min=INT_MAX,pos=-1,t=0,prev=0,comp=0,idle=0;
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	struct Process p[n];
	int rem[n];
	
	for(int i=0;i<n;i++)
	{
		
		printf("For Process %d ",i+1);
        p[i].pid=i+1;
		
		
		printf("Enter the value of AT and BT: ");
		scanf("%d %d",&p[i].at,&p[i].bt);
	}
	qsort ((void *)p, n, sizeof(struct Process), compare); 
	
	
	for(int i=0;i<n;i++)
	{
		rem[i]=p[i].bt;
		p[i].tat=p[i].wt=0;
	}
	while(comp<n)
	{
		for(int i=0;i<n;i++)
		{
			if(p[i].at<=t&& rem[i]<=min&&rem[i]>0)
			{
				min=rem[i];
				pos=i;
			}
		}
		
		if(pos!=-1)
		{
			if(rem[pos]==p[pos].bt)
			{
				p[pos].st=t;
				idle+=p[pos].st-prev;
			}
			 t++;
			prev=t;
			rem[pos]--;
			if(rem[pos]==0)
			{
				comp++;
           		p[pos].ct=t;
				p[pos].tat=p[pos].ct-p[pos].at;
				p[pos].wt=p[pos].tat-p[pos].bt; 
				p[pos].rt=p[pos].st-p[pos].at;
        	} 
		}
		else
		{
			t++;
		}
		min=rem[pos];
		if(min==0)
			min=INT_MAX;
	}

	float cpu_ut=0,thro=0,cyclelen=0;
	cyclelen=p[n-1].ct-p[0].st;
	cpu_ut=((cyclelen-idle)/cyclelen)*100;
	thro=n/cyclelen;
	printf("PID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
	for(int i=0;i<n;i++)
	{
		printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
	} 
	printf("CPU Utilization: %6.2f%\nThroughput: %6.3f\n",cpu_ut,thro);
	return 0;	
			
}
