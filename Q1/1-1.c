#include <stdio.h>

int main() {

    char userInput[256];
    printf("1バイト文字列の入力 > ");
    scanf("%s", userInput);
    printf("入力内容 > %s \n", userInput);

    return 0;
}
