#include "0x05-pointers_arrays_strings/main.h"

int main(void)
{
        char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
