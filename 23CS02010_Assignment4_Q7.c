#include<stdio.h>

int main()
{
    float age;
    int r=0;
    printf("Input age: ");
    scanf("%f",&age);
    if(age>0.0)
    {
        if(age>=5.0 && age<=12.0)
            r=20;
        else if(age>12.0 && age<60.0)
            r=50;
        else if(age>=60.0)
            r=80*50/100;
        printf("Rate = %d",r);
    }
    else
        printf("Incorrect age");
    return 0;
}