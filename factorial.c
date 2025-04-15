#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf("Number of terms:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*1;
    }
    printf("Factorial of %d=%d",a,fact);
    return 0;
}