#include <stdio.h>
#include<math.h>

int main(){
    int i,j,fact,n;
    float x,y,u,u1;

    printf("Enter the number of elements\n");
    scanf("%d",&n);
    float a[n][n+1];
    //Getting the value of X
    printf("Enter the value of X\n");
    for(i= 0;i<n;i++){
    scanf("%f",&a[i][0]);
    }
    //Gettibg the value of Y
    printf("Enter the value of Y\n");
    for(i= 0;i<n;i++){
    scanf("%f",&a[i][1]);
    }
    //Enter the vale of X
    printf("Enter the value of x for which you want y\n");
    scanf("%f",&x);

    //Creating the differance table
    for(j=2;j<n+1;j++)
    { 
        for(i=0;i<n-j+1;i++)
        {
            a[i][j]= a[i+1][j-1]-a[i][j-1];
        }
    }
    //Print the differance table
    printf("The Difernace table is as follow\n");
    for(i=0;i<n;i++)
    {

        for(j =0;j<=n-i; j++)
        {
            printf("%f ",a[i][j]);
           
        }
         printf("\n");
    }

    
    //Find U and apply the formula
    u =(x -a[0][0])/(a[1][0]-a[0][0]);
    u1=u;
    fact =1;
    y =a[0][1];
    for(i =2;i<=n;i++)
    {
        y =y+ (u1*a[0][i])/fact;
        fact =fact *i;
        u1= u1*(u-(i-1));

    }


    printf("\n\nValue of y=%f at x=%g ",y,x);
    return 0;
}

