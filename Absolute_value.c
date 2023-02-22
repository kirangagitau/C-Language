#include "main.h"

/**
 * By defination the absolute value is the value that is not negative. i.e postive number.
 * _abs - Computing the abs value
 * @c: the number to be computed
 * Return: Absolute value of number or sero.
 */

int _abs(int c)
{       
        if (c < 0)
        {       
                int abs_val;
                abs_val = c * -1;
                return (abs_val);
        }       
        return (c);
}
