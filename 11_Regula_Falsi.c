#include<stdio.h>
#include<math.h>
float func(float x)
{
	return (2*pow(x,3)-2*x-5);
}

void main()
{
	float e,a,h,b,c;
	printf("Enter the allowable error:-");
	scanf("%f",&e);
	printf("Enter the lower and upper intervals:-\n");
	scanf("%f%f",&a,&b);
	if(func(a)*func(b)>0)
	   return;
	else
	{
		do
		{
			c=a-(func(a)*(a-b))/(func(a)-func(b));
			if(func(c)>0)
			b=c;
			else
			a=c;
			h=a-(func(a)*(a-b))/(func(a)-func(b));
		}while(fabs(h-c)>e);	
	}
	printf("The result is:-%f",h);
}
