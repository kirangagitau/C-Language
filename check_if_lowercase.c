#include "main.h"

/**
 * _islower - Checks for lowercase characters.
 * @c: The character to be checked
 * return: 1 for lowercase character or 0 for anything else
 *
 * the program uses the ASCII value range for the alphabets to check if it is lower case
 * If anything else is entered even a symbol, then it return o
 */

int _islower(int c)
{       
        if (c >= 97 && c <= 122)
        {       
                return (1);
        }       
        return (0);
}
