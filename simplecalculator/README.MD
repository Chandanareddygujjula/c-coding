# Simple Calculator  
This is a basic simple calculator written in the C programming language.  
The program allows users to perform arithematic operations.  
i.Addition  ii.Subtraction  iii.Multiplication  iv.Division  v.Choose to exit  
The program greets the user with a welcome message.  
int option -> Here we are declaring a variable named as option to integer data type (option contains like numbers 1,2,3,4,5.).  
The program displays a memu with 5 options.  
scanf() -> here it implies that the information taken by the user in the output.  

## Code  
```c  
#include<stdio.h>  
int main()  
{  
    printf("Welcome to this simple calculator");  
    int option;  
    printf("\nChoose option :\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exit\nEnter Option :");  
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
        printf("\nAddition : %d",a+b);  
    }   
    else if(option==2)  
    {  
        printf("\nSubtraction : %d",a-b);  
    }  
    else if(option==3)  
    {  
        printf("\nMultiplication : %d",a*b);  
    }  
    else if(option==4)  
    {  
        printf("\nDivision : %d",a/b);  
    }  
    return 0;  
}  
```
  
Here we are using the "if else" condition.  
## if else :  
It is a conditional statement.  
i. if condition 1 is true, it executes the block of code. And reamining conditions will skip.  
ii. if condition 1 is false, it checks the else if condition, if it is true then it executes.  
  
## Syntax :
if(condition)  
{  
    // code block  
}  
else  
{  
    //code block  
}  
i. if(condition) -> checks if the condition is true.  
ii. if true, the first block of code runs. if false, the else block of code runs. 
  
The user selects an option by entering a number 1-5.  
if 5 is selected then the program displays a thankyou message and ends the program.  
Here we are taking two user inputs (a&b), cause to perform the choosen calculations.  
if an operation is selected (1-4) then :  
if the user choose 1 -> it displays Addition (a+b).  
if the user choose 2 -> it displays Subtraction (a-b).  
if the user choose 3 -> it displays Multiplication (a*b).  
if the user choose 4 -> it displays Division (a/b).

## Expected Output :
Welcome to this simple calculator  
Choose option :  
1)Addition  
2)Subtraction  
3)Multiplication  
4)Division  
5)Exit 
Enter Option : 3   
Enter value of a: 20  
Enter value of b: 25  
Multiplication : 500





