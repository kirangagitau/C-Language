#include <stdio.h>

/**
*@ Author Gitau Muguro
*/

int main() {
   int loop;
   int factorial=1;
   int number = 5;

   for(loop = 1; loop<= number; loop++) {
      factorial = factorial * loop;
   }

   printf("Factorial of %d = %d \n", number, factorial);

   return 0;
}
