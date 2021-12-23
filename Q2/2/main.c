#include <stdio.h>

const int UPPRERCASE_A_ASCII = 65;
const int UPPRERCASE_Z_ASCII = 90;

int main() {
    int i;
    for (i = UPPRERCASE_A_ASCII; i <= UPPRERCASE_Z_ASCII; i++) {
        printf("%c\n", i);
    }

    return 0;
}
