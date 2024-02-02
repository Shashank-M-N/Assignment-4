#include<stdio.h>

int main()
{
    float a;
    int m,n;
    char ch1;
    
    printf("Enter 2 numbers: ");
    scanf("%d%d",&m,&n);
    fflush(stdin);
    printf("Enter the operation:");
    scanf("%c",&ch1);
    switch(ch1) {
    case '+': a=m+n;
            printf(" %d %c %d = %f",m,ch1,n,a);
            break;
    case '-': a=m-n;
            printf(" %d %c %d = %f",m,ch1,n,a);
            break;
    case '*': a=m*n;
            printf(" %d %c %d = %f",m,ch1,n,a);
            break;
    case '/': a=(float)m/n;
            printf(" %d %c %d = %f",m,ch1,n,a);
            break;
    default: printf("Invalid input of operation");
            break;
    }
    return 0;
}