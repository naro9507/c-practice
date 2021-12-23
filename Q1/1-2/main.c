#include <stdio.h>
#include <string.h>

int main() {
    char userInput[256];

    do {
        printf("1バイト文字列の入力 > ");
        scanf("%s", userInput);
        if (strcmp(userInput, "end") != 0) {
            printf("入力内容 > %s \n", userInput);
        }
    } while (strcmp(userInput, "end") != 0);

    printf("bye〜");
    return 0;
}
