#include <stdio.h>
#include<math.h>
#define f(x,y) (pow(x,3)+y)

int main(){
    int i,count=1;
    float x0,xn,y0,result,n,h;
    printf("Enter the number of intervals\n");
    scanf("%f",&n);
    printf("Enter the initial value of x\n");
    scanf("%f",&x0);
    printf("Enter the initial value of y\n");
    scanf("%f",&y0);

    printf("Enter the value of x for which you want the value of y\n");
    scanf("%f",&xn);

    h=(xn-x0)/n;
    printf("Count\t\tX0\t\tY0");
    printf("\n");
    for(i=0;i<n;i++){
        result = y0 +h*f(x0,y0);
        y0=result;
        x0=x0+h;
        printf("%d\t\t%f\t%f\n",count,x0,y0);
        count++;
    }

 
}