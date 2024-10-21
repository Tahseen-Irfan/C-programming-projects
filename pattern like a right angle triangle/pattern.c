/* Write a program in C to display a pattern like a right angle triangle using an asterisk.

The pattern like :

*
**
***
****  */

#include<stdio.h>
int main()
{
    int n; //int k=1;
    printf("Enter the value of n :");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)// upor theke niche
    {
        for(int j=1; j<=i; j++)// pasha pashi
        {
            printf("*");
            // printf("%d",i);
            // printf("%d",j);
            // printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}
