#include <stdio.h>
#include <math.h>
float findvalue(float x)
{
    return (x/cos(x));
}
int main(){
    int n;
    float a,b,h,sum =0,i,j;
    printf("Enter the number of sub-intervals \n");
    scanf("%d",&n);
    printf("Enter the Lower limit\n");
    scanf("%f",&a);
    printf("Enter the upper limit\n");
    scanf("%f",&b);
    //Find the value of h
    h=(b-a)/n;
    sum = (findvalue(a)+ findvalue(b))/2;
    for(i =a+h;i<b;i=i+h){
        sum =sum +findvalue(i);
    }
    sum = h*sum;
    printf("Intergral is =%f\n",sum);

    return 0;
}