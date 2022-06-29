#include <stdio.h>
#include<math.h>
float f(float x)
{
    return(pow(x,3)-9*x+1);
}
float dfx(float x)
{
    return (3*x-9);
}
int main(){
    float e,h,c,a;
    printf("Enter the desired accuracy\n");
    scanf("%f",&e);
    printf("Enter the initial value of x\n");
    scanf("%f",&a);
    do{ 
        c= a-(f(a)/dfx(a));
         printf("%f\n",c);
        a=c;
        h=a-(f(a)/dfx(a));

    }while (fabs(h-c)>e);

        printf("The root is =%f\n",h);
    return 0;
}