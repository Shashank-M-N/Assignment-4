#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    switch (n%2) {
        case 0: printf("Its an even number");
                break;
        default:printf("Its an odd number");
                break;
    }

return 0;
}