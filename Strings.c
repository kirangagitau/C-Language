/**
* THE C LANGUAGE DOESN'T HAVE A 'string' TYPE. INORDER TO DEAL WITH STRINGS, ONE HAS TO USE 'char' AND DECLARE IT AS AN ARRAY.
* THEN USE THE ARRAY TO STORE INFO
*/


/**
* main - entry point of program.
* strings - dealing with reading string and displaying it.
* @str: string being worked on.
*/

#include <stdio.h>

void strings();

int main() {
    strings();

return 0;
}

void strings()
{
    char str[100]; //DECLARING AN ARRAY OF TYPE 'char' 

    printf("ENTER SOME STRING TO WORK ON \n \t");
    fgets(&str,sizeof(str),stdin);
    
    printf(str);
    return 0;
}
