#include<stdio.h>
int main()
{
    printf("Welcome to this simple calculator");
    int option;
    printf("\nChoose option :\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exit\nEnter option:");
    scanf("%d",&option);
    if(option==5)
    {
        printf("\nThank you for using this simple calculator");
    }
    int a,b;
    printf("\nEnter value of a:");
    scanf("%d",&a);
    printf("\nEnter value of b:");
    scanf("%d",&b);
    if(option==1)
    {
        printf("\nAddition :%d",a+b);
    }
    else if(option==2)
    {
        printf("\nSubtraction :%d",a-b);
    }
    else if(option==3)
    {
        printf("\nMultiplication :%d",a*b);
    }
    else if(option==4)
    {
        printf("\nDivision :%d",a/b);
    }
    return 0;
}