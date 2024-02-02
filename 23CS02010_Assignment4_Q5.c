#include<stdio.h>

int main()
{
    int n,temp,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>=100 && n<1000)
    {
        temp=n;
        while(temp)
        {
            sum+=(temp%10)*(temp%10)*(temp%10);
            temp/=10;
        }
        if(sum==n)
        printf("Yes, its an Armstrong number");
        else
        printf("No, its not a Armstrong number");
    }
    else
        printf("incorrect input");
    return 0;
}