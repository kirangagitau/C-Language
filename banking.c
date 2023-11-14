#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float accBal;
char accName[50];
int pinNum;
float amount;

int main()
{
	while (true)
	{
		printf("input ACCOUNT NAME: \n");
		scanf("%[^\n]%c", accName);
		if (accName == "gitau")
			break;
		else {
			system("clear");
			printf("UNKNOWN ACCOUNT NAME");
			continue;
		} 
	}
	return (0);
}
