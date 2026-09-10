//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
# inlude <stdio.h>
int main(){
    int l,b;
    printf("enter the length ofrectangle:");
    scanf("%d",&l);
    printf("enter the breadth of rectangle:");
    scanf("%d",&b);
    printf("area of rectangle is%d",l*b);
    printf("perimeter of rectangle is%d",2*(l+b));
    return 0;
}
