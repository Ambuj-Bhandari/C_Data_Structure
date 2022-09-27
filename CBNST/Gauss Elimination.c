#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
            if(j>i)
            { 
                float r=a[j][i]/a[i][i];
                for(int k=0;k<n+1;k++)
                {
                    a[j][k]=a[j][k]-(r*a[i][k]);
                }
            }
        }
    } 
    printf("Upper Triangular MAtrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("%6.0f ",a[i][j]);
        } 
        printf("\n");
    }
    return 0;
}
