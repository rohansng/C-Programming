#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int count = 1;
    printf("Enter a sentence: ");
    gets(str);

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' && str[i+1] != ' ')
            count++;
    }

    printf("Total words: %d\n", count);
    return 0;
}
