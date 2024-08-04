#include <stdio.h>
#include "main.h"

int main(void)
{
_printf("Let's try to printf a simple sentence.\n");
_printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
_printf("Percent:[%%]\n");
_printf("Number:[%d]\n", 123);
_printf("Negative Number:[%d]\n", -456);
return (0);
}

