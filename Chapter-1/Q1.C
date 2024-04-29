#include<stdio.h>

int main (){
    int a, b; // diclaration of two variables a & b
    printf("Enter a : "); 
    scanf("%d", &a); // take input of a from user
    printf("Enter b : ");
    scanf("%d", &b); // take input of b from user 
    printf("Perimeter of Rectangle is : %d", 2*(a+b)); // calculate and print perimeter of rectangle
    
    return 0;
}