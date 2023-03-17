// Q4.Write a C program to take values of two integers and add them, display the result.
#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: \n");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
