#include <stdio.h>
#include<math.h>
#define f1(x,y,z) (17-y+2*z)/20
#define f2(x,y,z) (-18-3*x+z)/20
#define f3(x,y,z) (25-2*x+3*y)/20


int main(){
    int i=1;
    float x0=0,y0=0,z0=0,x1,y1,z1,e,e1,e2,e3;
    printf("Enter the allowable tollerance \n");
    scanf("%f",&e);
    printf("Count\t  X\t   Y\t   Z\n");
        do{
            x1= f1(x0,y0,z0);
            y1=f2(x1,y0,z0);
            z1 =f3(x1,y1,z0);
            printf("%d\t%0.4f\t%0.4f\t%0.4f\t\n",i,x1,y1,z1);
            
            e1=fabs(x0-x1);
            e2=fabs(y0-y1);
            e3=fabs(z0-z1);
            i++;
            x0=x1;
            y0=y1;
            z0=z1;

        }
    while(e1>e && e2>e && e3>e);
    printf("Solutios are X =%0.3f  Y =-%0.3f  Z =%0.3f",x1,y1,z1);
    return 0;
}