#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* main - define function
* @void - describe argument
* Return: Void
*/
int main(void)
{
int len;
 int len2;
/*    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
    len2=_printf("Character:[%c]\n", 'H');
    printf("%d\n", len2);
    len2=printf("Character:[%c]\n", 'H');
    printf("%d\n", len2);
    len2=_printf("String:[%s]\n", "I am a string !");
    printf("%d\n", len2);
    len2=printf("String:[%s]\n", "I am a string !");
    printf("%d\n", len2);
    /* _printf("Address:[%p]\n", addr);
       printf("Address:[%p]\n", addr);*/
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Len:[%d]\n", len);
    printf("Len2:[%d]\n", len2);

    len = _printf("Percent:[%s]\n","is %");
    len2 = printf("Percent:[%s]\n","is %");
    printf("Len:[%d]\n", len);
    printf("Len2:[%d]\n", len2);

    len = _printf("Hola %c%s%s\n",'c');
  //  len2 =_printf("%s",'c');
     printf("%d\n",len);
  //  printf("h3ll0 -w%%orl.\n");
//printf("%d\n", len2);

//printf("h3ll0 -w%%orl.\n");
len2 = _printf("h3ll0 -w%orl.\n");
printf("%d\n", len2);
len2 = _printf("% as\n");
printf("%d\n", len2);



    /*_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    return (0);
}
