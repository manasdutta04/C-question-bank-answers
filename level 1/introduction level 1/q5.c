// Q5. Write a C program to take values of two float variables add them, display the result.
#include <stdio.h>
int main() {    

    float number1, number2, sum;
    
    printf("Enter two float variables: \n");
    scanf("%f %f", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%f + %f = %f", number1, number2, sum);
    return 0;
}
