//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    float r;
    printf("enter radius of circle:");
    scanf("%f",&r);
    printf ("area of circle is:%.2f",3.14*r*r);
    printf ("\ncircumference of circle is:%f",2*3.14*r);
    return 0;
}