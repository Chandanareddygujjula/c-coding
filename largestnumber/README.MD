# Find the Largest of Three Numbers in C
This is a simple C program that reads three integer numbers from the user and finds the largest number among them.  

## Code  
```c  
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
```
The Program prompts the user to input three numbers a,b,c.  
Here I'm initialising that the first number (a) as the largest.  
By using if condition it compares that,  
**i.** if b is greater than the current largest, then the largest is updated to b.  
**ii.** if c is greater than the updated largest, then the largest is updated to c.  
Atlast, the program prints the value of largest.  
  
### Expected Output :
Enter first number: 5  
Enter second number: 3  
Enter third numbers: 8  
The Largest value is : 8

