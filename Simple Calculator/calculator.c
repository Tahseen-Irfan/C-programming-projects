/* Simple Calculator
Description: Build a basic calculator that can perform simple arithmetic operations such as addition, subtraction, multiplication, and division.
Concepts Used: Input/output, conditionals (if/else), functions.
Challenge: Add error checking for division by zero.*/

#include<stdio.h>

float add( float num1 , float num2 );
float sub( float num1 , float num2 );
float mul( float num1 , float num2 );
float div( float num1 , float num2 );

int main()
{
    int choice;
    float num1 , num2 , result;

    printf("1. addition\n");
    printf("1. subtraction\n");
    printf("1. multiplication\n");
    printf("1. division\n");


    printf("enter your choice(1/2/3/4) : \n");
    scanf("%d",&choice);

    if(choice >= 1 && choice <= 4)
    {
        printf("Enter The Num1:\n");
        scanf("%f",&num1);

        printf("Enter The Num2:\n");
        scanf("%f",&num2);


        switch (choice)
        {
        case 1:
            result = add(num1 , num2);
            printf("result : %.2f\n",result);
            break;
        
        case 2:
            result = sub(num1 , num2);
            printf("result : %.2f\n",result);
            break;
        
        case 3:
            result = mul(num1 , num2);
            printf("result : %.2f\n",result);
            break;

        case 4:
            if(num2 == 0){
                printf("Invalid");
            }

            else{
                result = div(num1 , num2);
                printf("result : %.2f\n",result);

            }
            
            break;
        
        }
    }

    else{
        printf("Error");
    }
    
    return 0;
}

float add( float num1 , float num2 ){
    return num1 + num2;
}

float sub( float num1 , float num2 ){
    return num1 - num2;

}

float mul( float num1 , float num2 ){
    return num1 * num2;
}

float div( float num1 , float num2 ){
    return num1 / num2;
}
