#include <stdio.h>

int equals(const char *s1, const char *s2) {
    int i = 0;

    while (s1[i] == s2[i]) {
        i += 1;
        if (s1[i] == '\0' && s2[i] == '\0') {
            return 1;
        }
    };

    return 0;
}

int main() {
    char userInput[256];

    do {
        printf("1バイト文字列の入力 > ");
        scanf("%s", userInput);
        if (equals(userInput, "end") != 1) {
            printf("入力内容 > %s \n", userInput);
        }
    } while (equals(userInput, "end") != 1);

    printf("bye〜");
    return 0;
}
