#include "main.h"


int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    printf("%s", s);
    p = leet(s);
    printf("%s", p);
    return (0);
}
