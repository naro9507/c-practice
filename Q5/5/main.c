#include <stdio.h>
#include <stdlib.h>

struct input {
    short short_num;
    int int_num;
    char text[6];
};

int main() {
    struct input input = {32767, 2147483647, "text_6"};
    char* fileName = "./dump.bin";
    FILE* file;
    file = fopen(fileName, "wb");

    // File Open Failed
    if (file == NULL) {
        printf("ファイルオープンに失敗しました。\n");
        exit(1);
    }

    fwrite(&input, sizeof(input), 1, file);
    printf("ファイルへの保存が完了しました。\n");
}
