
/**
* pointers - function to handle pointers.
* main - of type int, its the main function of the program.
* @salary: value to store.
* @*ptr: pointer to use
*/


#include<stdio.h>

void pointers();

int main () //THE MAIN FUNCTION
{
    pointers();
    
    return (EXIT_SUCCESS);
}

void pointers()
{

 double salary = 0;

    printf("ENTER SALARY AMOUNT \n");
    scanf("%lf", &salary);

     double* ptr = &salary; //DECLARING A POINTER OF TYPE double AND ASSING IT TO THE MEMORY LOCATION OF VARIBALE  salary WHICH IS ALSO OF TYPE double.
    
    printf("salary is: %.2lf \n", *ptr); //PRINTING VALUE AT POINTER. 

    *ptr = *ptr * 2; //DOUBLING VALUE AT POINTER

    printf("New salary is: %.2lf \n", *ptr); //PRINTING NEW VALUE OF POINTER

    return 0;

}
