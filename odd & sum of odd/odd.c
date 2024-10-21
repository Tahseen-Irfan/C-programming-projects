/*Write a C program to display the n terms of odd natural numbers and their sum.
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100*/

#include<stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter the value of n :\n");

    scanf("%d",&n);

    for(int i= 1; i <= n; i++){

        printf("The odd numbers are :%d\n", 2*i-1);

        sum += 2*i-1;
    

        printf("The Sum of odd Natural Number upto %d terms :%d\n",i, sum);
    }
    return 0;
}