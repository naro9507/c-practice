#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stdoFileNotOpenError() {
    printf("ファイルオープンに失敗しました。\n");
    exit(1);
}

int main(int argc, char* argv[]) {
    char* mode = "input";
    if (argv[1] != NULL && strcmp(argv[1], "-o") == 0) {
        mode = "output";
    }
    char* fileName = "./dump.bin";

    FILE* file;

    if (strcmp(mode, "output") == 0) {
        file = fopen(fileName, "rb");

        // File Open Failed
        if (file == NULL) {
            stdoFileNotOpenError();
        }

        char buf[256];
        fgets(buf, 256, file);
        fclose(file);

        printf("ファイルに保存された文字列 > %s", buf);
    } else {
        char userInput[256];

        printf("1バイト文字列の入力 > ");
        fgets(userInput, sizeof userInput, stdin);
        printf("入力内容をファイルに保存中...\n");
        file = fopen(fileName, "wb");
        // File Open Failed
        if (file == NULL) {
            stdoFileNotOpenError();
        }
        int size = 0;
        while (userInput[size] != '\0') {
            size++;
        }
        fwrite(userInput, size, 1, file);
        fclose(file);
        printf("ファイルへの保存が完了しました。\n");
    }
}
