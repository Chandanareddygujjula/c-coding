# Factorial 
Factorial is the product of all positive numbers from 1 to n (infinity).  
We can calculate the factorial by using : for loop or while loop.  
int declaring -> i,n,fact variables.  
Initializing a variable fact to 1 (fact=1).    

## Code :  
```c  
#include <stdio.h>  
int main()   
{  
    int n,i,fact = 1;  
    printf("Enter an integer: ");  
    scanf("%d",&n);   
    for(i=1;i<=n;i++)  
    {  
        fact*=i;  
    }  
    printf("Factorial of %d = %d",n,fact);  
    return 0;  
}  
```   
Here we vare using "for loop".  
## for Loop :
It is a conditional statement.  
**for loop** -> used to repeat a block of code a certain number of times.  
    
### Syntax :
for(Initialization; Condition; Increment/Decrement)  
{  
    // code block  
}  
**Initialization** -> initialize a starting numnber ( i.e.,  i=0,1,2,3......n).  
**Condition** -> loop runs when the condition is true (i.e.,  i<=n,i>=n....etc).  
**Increment/Decrement** -> Increasing or Decreasing (i.e.,  i++,++i,i--,--i).  
  
As we are writing  fact*=i -> that means fact is multliplying with fact and i.  
  
### Expected Output :
 Enter an integer: 5   (Take any integer value)  
 Factorial of 5 = 120  