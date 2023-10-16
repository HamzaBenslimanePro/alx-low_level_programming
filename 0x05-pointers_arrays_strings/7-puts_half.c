#include "main.h"

/**
 * puts_half - blabla
 * @str: string used
 */

void puts_half(char *str)
{
    int i, c, n;
    
    c = 0;
    
    for (i = 0; str[i] != '\0'; str++)
    {
        c++;
    }
    n = c / 2;
    if ((c % 2) == 1)
    {
        n =((c + 1) / 2);
    }
    for (i = n; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');

}
