// Q8. Write a C program to divide two float variables and display the result.
#include <stdio.h>
int main() {    

    float number1, number2, divide;
    
    printf("Enter two float variables: \n");
    scanf("%f %f", &number1, &number2);

    // divide two float
    divide = number1 / number2;      
    
    printf("%f / %f = %f", number1, number2, divide);
    return 0;
}
