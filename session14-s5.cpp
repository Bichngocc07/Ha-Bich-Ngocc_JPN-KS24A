#include<stdio.h>

int main(){
	char string[] = "Hello world my name is";
    int length = sizeof(string)/sizeof(char);
    int count = 0;
    int inWord = 0;

    // B2:
    for(int i = 0; i < length - 1; i++) {
        // B3:
        if(string[i] != ' ') {
            inWord = 1;
        } else {
            inWord = 0;
        }

        if(inWord == 0) {
            count++;
        }
    }

    printf("count = %d\n", count + 1);
    return 0;
}
