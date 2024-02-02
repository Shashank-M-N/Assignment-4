#include<stdio.h>

int main()
{
    int cs, cb;
    float interest;
    printf("Enter the current balance: ");
    scanf("%d",&cb);
    printf("Enter the credit score: ");
    scanf("%d",&cs);
    if(cs<600)
        interest=15.0*cb/100.0;
    else if( cs>=600 && cs<=750)
        interest=12.0*cb/100.0;
    else
        interest=10.0*cb/100.0;
    printf("The interest amount is: %f",interest);
    return 0;
}