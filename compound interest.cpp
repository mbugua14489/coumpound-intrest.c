// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main()
{
    float t,n,r,p,interest;
    printf("\nEnter the principal amount=");
    scanf("%f",&p);
    printf("\nEnter time value=");
    scanf("%f",&t);
    printf("\nEnter rate value=");
    scanf("%f",&r);
    interest=p*pow((1+r),t);
    printf("interest %F",interest);
    

    return 0;
}