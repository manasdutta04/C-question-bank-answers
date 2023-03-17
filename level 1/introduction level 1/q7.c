// Q7. Write a C program to multiply two integer variables and display the result.
#include <stdio.h>
int main() {    

    int number1, number2, multiply;
    
    printf("Enter two integers: \n");
    scanf("%d %d", &number1, &number2);

    // multiply two integers
    multiply = number1 * number2;      
    
    printf("%d * %d = %d", number1, number2, multiply);
    return 0;
}
