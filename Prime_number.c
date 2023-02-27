#include <stdio.h>

/**
*@Author Gitau Muguro
*
*This source checks if a given number is primes or not. can be modified to generate prime numbers 
*in a given range of values.
*/

int main() { 
   int loop, number;
   int prime = 1;
   
   number = 11;

   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is prime number.", number);
   else
      printf("%d is not a prime number.", number);
   return 0;
}
