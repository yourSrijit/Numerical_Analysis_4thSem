#include <stdio.h>
#include<math.h>

int main(){
	int i,n,j;
	float x,h,u,u1,fact,y;
	printf("Enter the number of terms\n");
	scanf("%d",&n);
    float a[n][n+1];

	printf("Enter the values of x\n");
	for(i =0;i<n;i++){
	scanf("%f",&a[i][0]);
	}

	printf("Enter the values of y\n");
	for(i=0;i<n;i++){
	scanf("%f",&a[i][1]);
	}
	printf("Enter teh value of x for which you want the value of y\n");
	scanf("%f",&x);

	//Creating the differance table
	for(j=2;j<=n;j++)
	{
		for(i=0;i<n-j+1;i++){
			a[i][j]= a[i+1][j-1]-a[i][j-1];
		}
	}

	// display the differance table
	for(i=0;i<n;i++){
		for(j=0;j<=n-i;j++){
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}

	//Applying the  formula
	h=a[1][0]-a[0][0];
	u=(x-a[n-1][0])/h;
	y=a[n-1][1]; 
	u1=u;
	fact =1;
	j=2;
	for(i=n-2;i>=0;i--){
		y=y+(u1*a[i][j])/fact;
		  fact=fact*j; 
        u1=u1*(u+(j-1));
        j++;
	}

	 printf("\n\nValue at X=%g is = %f", x,y);
}