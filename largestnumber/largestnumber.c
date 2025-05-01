#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    printf("\nEnter third number:");
    scanf("%d",&c);
    int largest=a;
    if(b>largest)
    {
        largest=b;
    }
    if(c>largest)
    {
        largest=c;
    }
    printf("The largest Number is : %d",largest);
    return 0;
}