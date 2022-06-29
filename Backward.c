#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n;
	float x[10],y[10][10],p,q,h,u,s,k;
	printf("Enter the number of points:-");
	scanf("%d",&n);
	printf("Enter the values of y:-");
	for(i=0;i<n;i++)
	scanf("%f",&y[i][0]);
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		y[i][j]=0;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>0;j--)
		y[j][i+1]=y[j][i]-y[j-1][i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf("%f \t",y[i][j]);
		printf("\n");
	}
	
	printf("Enter the value of X:-");
	scanf("%f",&k);
	printf("Enter the values of x:-\n");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	
	h=x[2]-x[1];
	u=(k-x[n-1])/h;
	s=y[n-1][0];
	
	p=q=1;
	for(j=1;j<n;j++)
	{
		p=p*j;
		q=q*(u-1+j);
		s+=(q*y[n-1][j])/p;
	}
	printf("Sum is:-%f",s);
}

