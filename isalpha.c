#include "main.h"
#include <stdio.h>
/**
 * _isalpha - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */

int _isalpha(int c)
{

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

        return (1);
    else
        return (0);
}
