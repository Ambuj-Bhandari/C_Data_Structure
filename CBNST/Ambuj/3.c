#include<stdio.h>
#include<unistd.h>
int main()
{
	int x=fork();
	if(x==0)
	{
		printf("Process ID Child:%d \n",getpid());
		printf("Its Parent ID: %d\n",getppid());
	}
	else
	{
		sleep(5);
		printf("Process ID of parent: %d\n",getpid());
	}
	return 0;
}
