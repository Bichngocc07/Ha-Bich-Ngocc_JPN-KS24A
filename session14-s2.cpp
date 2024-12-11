#include <stdio.h>
#include <string.h>

int main() {
    char string[100] = "Xin chào!";
    int length =  sizeof(string) / sizeof(char);
    for (int i = 0; i < length; i++) {
        printf("%c", string[i]);
    }

    return 0;
}

