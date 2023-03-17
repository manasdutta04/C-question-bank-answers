// Q16. Write a program in C to create a function that when called prints your name.
#include<stdio.h>
void Print_Name(void) {
    char name[20];
    printf("Enter Your Name : ");
    scanf("%s",&name);
    printf("Your Name Is : %s", name);
}
int main() {
    Print_Name();
    return 0;
}