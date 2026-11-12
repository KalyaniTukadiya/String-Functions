#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ABCDE";
    char dest[20];
    memmove(str+1, str, 4);
    printf("%s", str);
    return 0;
}
