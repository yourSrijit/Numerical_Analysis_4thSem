#include <stdio.h>


int main(){
    int i,j,n;
    float x,y,sum=0,term;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    float X[n];
    float Y[n];
    printf("Enter the value of x\n");
    for(i= 0;i<n;i++){
    scanf("%f",&X[i]);
    }
    printf("Enter the value of y\n");
    for(i=0;i<n;i++){
    scanf("%f",&Y[i]);
    }
    printf("Enter the value of x for which you want the value of y\n");
    scanf("%f",&x);
    for(i =0;i<n;i++){
        term =1;
        for(j =0;j<n;j++)
            {
                if(i!=j)
                    term =term *((x-X[j])/(X[i]-X[j]));
            } 
             sum = sum +term *Y[i];
       
    }
    printf("\nValue at X=%g is = %f", x,sum);
    return 0;
}