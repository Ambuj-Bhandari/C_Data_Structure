#include<stdio.h>
int main()
{
	float tru,ap;
	float ab,re,per;
	
	printf("Enter the True value and approximate value: ");
	scanf("%f %f",&tru,&ap);
	
	ab=tru-ap;
	if(ab<0)
	{
		ab=-ab;
	}
	re=ab/tru;
	per=re*100;
	
	printf("Absolute Error: %6.5f",ab);
	printf("\nRelative Error: %6.5f",re);
	printf("\nPercentage Error: %6.5f\n",per);
	
	return 0;
}
