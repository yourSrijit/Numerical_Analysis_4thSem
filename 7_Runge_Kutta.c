#include <stdio.h>
#include <math.h>
float f(float x,float y){
    return (x- y );
}

int main(){
    int i=1;
    float x,y,x0,y0,xn,h,k1,k2,k3,k4,k;
    printf("Enter the initial value of X\n");
    scanf("%f",&x0);

    printf("Enter the initial value of Y\n");
    scanf("%f",&y0);

    printf("Enter the step lenth\n");
    scanf("%f",&h);

    printf("Enter the value of X for which you want the value of Y\n");
    scanf("%f",&xn);

    do{
        k1=h* f(x0,y0);
        k2 =h* f(x0+h/2,y0+k1/2);
        k3=h* f(x0+h/2,y0+k2/2);
        k4=h* f(x0+h,y0+k3);
        k=(k1+2*k2+2*k3+k4)/6;
        y0=y0+k;
        x0=x0+h;
        printf("%d\t%f\t%f\n",i++,x0,y0);
    }
    while (x0<xn);
    
       printf("The value of yn is %f",y0);
    
}

    

