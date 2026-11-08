/*

Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

Input

The input file contains 3 integer values.
Output

Print the greatest of these three values followed by a space and the message “eh o maior”.
*/
#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int A,B,C,major;
    scanf("%d %d %d",&A,&B,&C);
    major = ((A+B) + abs(A-B))/2;
    if (major>C)
    {
        printf("%d eh o maior",major);
    }
    else
    {
        printf("%d eh o maior",C);
    }
    return 0;
}
    
