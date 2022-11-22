#include<stdio.h>
float fx(float x)
{
	return(1/(1+(x*x)));
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
	float j=a+h;
	int i=1;
	while(1)
	{
		if(i%3==0)
			sum=sum+2*fx(j);
		else
			sum=sum+3*fx(j);
			
		i++;
		j=j+h;
		if(j==b)
			break;
	}
	
    sum=(sum*3*h)/8;
	printf("%f\n",sum);
	return 0;
}
