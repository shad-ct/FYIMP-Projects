#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "abbbbbccc";
    int i, count, len = strlen(str);

    for (i = 0; i < len; i++) {
        count = 1;
        while(i+1 < len && str[i] == str[i+1]){ 
// where the main task happens (comparing adjacent char and adding how many times repeated)
            count ++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
}
