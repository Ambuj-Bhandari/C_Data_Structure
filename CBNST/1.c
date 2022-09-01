#include<stdio.h>
#include<math.h>
int main()
{
	float tru,ap;
	float ab,re,per;
	
	printf("Enter the True value and approximate value: ");
	scanf("%f %f",&tru,&ap);
	
	ab=fabs(tru-ap);
	re=ab/tru;
	per=re*100;
	
	printf("Absolute Error: %6.5f",ab);
	printf("\nRelative Error: %6.5f",re);
	printf("\nPercentage Error: %6.5f\n",per);
	
	return 0;
}
