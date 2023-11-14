#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
*@Author Gitau Muguro
*
*This program checks if a given number is an armstrong number
*but can be modified to generate armstrong number within a given range
*/

int main() {
   int arms = 153; 
   int check, rem, sum = 0;
   pid_t pid,ppid;

   check = arms;

   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
   }

   if(sum == arms) 
      printf("%d is an armstrong number.", arms);
   else 
      printf("%d is not an armstrong number.", arms);

   pid = getpid();
   printf("\nTHIS PROCESS RUN WITH PID: %u\n" ,pid);
   ppid = getppid();
   printf("PARENT PID: %d\n");
   return 0;
}
