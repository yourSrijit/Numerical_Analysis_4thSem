#include<stdio.h>
#include<stdlib.h>
void main()
{
	float a[5][5],b[5],x[5],z,sum=0;
	int n,i,j,k;
	printf("Enter the order of the matrix: ");
	scanf("%d",&n); 
	printf("Enter the coefficient matrix a[i][j]: \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%f",&a[i][j]);	
	printf("Enter the constant matrix b[i]: \n");
	for(i=1;i<=n;i++)
	scanf("%f",&b[i]);
	
	for(k=1;k<=n;k++)
	{
		for(i=k+1;i<=n;i++)
		{

			z=a[i][k]/a[k][k];
			for(j=1;j<=n;j++)
			{
				a[i][j]=a[i][j]-(z*a[k][j]);
			}
		b[i]=b[i]-(z*b[k]);	
		}
	}
	x[n]=b[n]/a[n][n];
	for(k=n-1;k>=1;k--)
	{
		sum=b[k];
		for(j=n;j>=k+1;j--)
		{
			sum=sum-(a[k][j]*x[j]);
		}
		x[k]=sum/a[k][k];
	}
	printf("Solution: \n");
	for(i=1;i<=n;i++)
	printf("x[%d] = %f\n",i,x[i]);
}