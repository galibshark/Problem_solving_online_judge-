/*
Read an integer value, which is the duration in seconds of a 
certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in 
hours:minutes:seconds like the following example.
*/
#include <stdio.h>
int main() 
{
    int N,second,min,hour;
    scanf("%d",&N);
    second = N - ((N/60)*60);
    min = (N/60)-((N/3600)*60);
    hour = N / 3600;
    printf("%d:%d:%d\n",hour,min,second);
    return 0;
}
