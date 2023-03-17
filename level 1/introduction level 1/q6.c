// Q6. Write a C program to take values of two character variables add them, display the result.
#include <stdio.h>
int main() {    

    char number1, number2, sum;
    
    printf("Enter two charecter: \n");
    scanf("%c %c", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%c + %c = %c", number1, number2, sum);
    return 0;
}
