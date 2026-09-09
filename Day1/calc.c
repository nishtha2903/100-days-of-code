//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int num1,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number :");
    scanf("%d",&num2);
    printf("sum of two numbers is:%d",num1+num2);
    printf("difference of two numbers is:%d",num1-num2);
    printf("product of two numbers is:%d",num1*num2);  
    printf ("quotient of two numbers is :%d",num1/num2);
return 0;               
}