// Take a number(n) from user & output its cube(n*n*n).
#include<stdio.h>
int main(){
    int a; // dicler a variable called a

    printf("Enter A number :\n "); // Printing a message for take input
    scanf("%d", &a);               // take input from user

    printf("The Cube of Number is %d", a * a * a); // calculate and Print cube of n

    return 0;
}