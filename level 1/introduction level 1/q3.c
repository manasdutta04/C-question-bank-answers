// Q3. Write a C program to print values of variables taken by the user.
#include<stdio.h>

int main() {
    int a,b;
    float c;
    char ch;
    printf("Enter The Value Of a & b : ");
    scanf("%d %d", &a, &b);
    printf("Enter a charecter ch : ");
    scanf("%s", &ch);
    printf("Enter The Value Of c : ");
    scanf("%f", &c);
    printf("You Have Enter The Value Of a Is %d , b Is %d , c Is %.3f , ch Is %c \n",a,b,c,ch);
    return 0;
}
