#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point of the program
 * @argc: count of the supplied arguments
 * @argv: pointer vector to supllied arguments
 * Return: Exit status of the program
 **/

int main(int argc, char **argv)
{
	int abs, ans, counts;

	counts = 1; /* TRAVERSING FROM SECOND INDEX IN THE ARRAY */
	ans = 0;

	if (argc < 2) /* IF NO ARGUMENTS ARE GIVEN */
	{
		printf("NO ARGUMENTS GIVE\n");
	}
	else
	{
		while (counts < argc) /* USING WHILE LOOP TO TRAVERSE ALL THE ARGUMENTS */
		{
			abs = atoi(argv[counts]);
			ans += abs;
		counts++;
		}
		printf("SUM IS: %d\n", ans);
	}
	return (EXIT_SUCCESS); /* EXIT STATUS OF THE PROGRAM. */
}
