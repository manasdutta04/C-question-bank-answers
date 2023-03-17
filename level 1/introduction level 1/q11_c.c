/* print pattern
1
11
111
1111 */

#include <stdio.h>
int main() {
   int i, j, n;
   printf("Enter the number of n: "); // enter value of n=4 in the question
   scanf("%d", &n);
   for (i = 1; i <= n; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("1 ");
      }
      printf("\n");
   }
   return 0;
}

