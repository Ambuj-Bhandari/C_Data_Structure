#include<stdio.h>
float fx(float x)
{
	return(1/((x*x*x)+10));
}
int main()
{
	int n;
	float a,b;
	printf("Enter the values of a and b: ");
	scanf("%f %f",&a,&b);
	
	printf("Enter the number into which the intervals should be divided: ");
	scanf("%d",&n);
	
	float h=(b-a)/n;
	float sum=fx(a)+fx(b);
	for(float i=a+h;i<b;i=i+h)
	{
		sum=sum+2*fx(i);
	}
	
    sum=(sum*h)/2;
	printf("%f\n",sum);
	return 0;
}
