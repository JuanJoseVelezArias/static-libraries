#include "main.h"
#include <stdio.h>
/**
 * _islower - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */

int _islower(int c){
    if (c >= 'a' && c <= 'z')
    
        return(1);
    else
        return(0);
    
}
int main(void)
{
    int r;

    r = _islower('H');
        _putchar(r + '0');
    r = _islower('o');
        _putchar(r + '0');
    r = _islower(108);
        _putchar(r + '0');
        _putchar('\n');
    return (0);
}