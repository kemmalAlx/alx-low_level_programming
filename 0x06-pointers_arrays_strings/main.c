#include "main.h"
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s, %d\n", ptr, 'a' + 'A');
    printf("%s", str);
    return (0);
}