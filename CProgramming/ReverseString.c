#include <stdio.h>
#include <string.h>
int main()
{
    char name[100] ="Reverse",rev[100];
    int length = strlen(name),i;

    for (i = length - 1; i >= 0; i--) {
        rev[i] = name[length-i-1];
    }
        printf("%s",rev);
}
