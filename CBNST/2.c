#include<stdio.h>
#include<math.h>
float fx(float x)
{
	return((x*x*x)-(5*x)+1);
}

float f(float a,float b)
{
	return(0.5*(a+b));
}
int main()
{
	float a,b,all,x;
	printf("Enter the values of a and b: ");
	scanf("%f %f",&a,&b); 
	int it=1;
	int i=0;
		if(fx(a)*fx(b)<0)
		{
			printf("Root lies between %6.2f and %6.2f\n",a,b); 
			i=1;
		}
		else
 		{
			
			printf("Invalid Roots!!! Try again\n");
		}
	
		while(i)
		{
			printf("Enter the value of allowed error: ");
			scanf("%f",&all);
			do{ 
				x=f(a,b);
				printf("%d Iteration the value of x is: %f\n",it,x);
				if(fabs(x)<=all)
				{
					printf("Root is %f\n",x); 
					i=0;
				} 
				else if(fx(a)*fx(x)<0)
				{
					b=x;
				}
				else
				{
					a=x;
				} 
			it++;
			}while(i!=0);
		}	
	
	return 0;
}
