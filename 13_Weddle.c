#include <stdio.h>
float f(float x)
{
    return 1/(1+x*x);

}

int main(){
    int count =1;
    float a,b,h,n,sum=0,c;

    printf("Enter the lower limit\n");
    scanf("%f",&a);
    
    printf("Enter the upper limit\n");
    scanf("%f",&b);

    printf("Entre the number of interevals (multiplication of 6)");
    scanf("%f",&n);
 

    h= (b-a)/n;
    c=a;
    printf("Intervls\tX\t\tf(y)");
    printf("\n");
    
    do{
    sum =sum +(3*h/10)*(f(a)+5*f(a+h)+f(a+2*h)
    +6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(a+6*h));
    a=a+6*h;
    }while(a<b);

    while(c<=b){
        printf("%d\t\t%f\t%f\n",count,c,f(c));
        count ++;
        c= c+h;
    }

    printf("The integral is %f\n",sum);
    return 0;
}