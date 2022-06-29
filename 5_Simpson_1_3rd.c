#include <stdio.h>
float findvalue(float x){
return (1/(1+x));
}
int main(){
    int n;
    float a,b,sum =0,h,i;
    printf("Enter the lower limit \n");
    scanf("%f",&a);
    printf("Enter the upper limit\n");
    scanf("%f",&b);
    printf("Enter the intervals\n");
    scanf("%d",&n);

    //Find the value of h
    h= (b-a)/n;
    sum = findvalue(a)+findvalue(b);
    for(i=a+h;i<b;i=i+2*h){
        sum =sum+4*findvalue(i);
    }
    for(i=a+2*h;i<b;i=i+2*h){
        sum =sum +2*findvalue(i);
    }
    sum =(sum*h)/3;
    printf("\nIntegral is =%f\n",sum);
    return 0;
}