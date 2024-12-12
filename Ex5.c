#include <stdio.h>#include <stdio.h>

int main() {
    char str[100];
    int word_count = 0;
    int in_word = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            in_word = 0;
        } else if (!in_word) {
            word_count++;
            in_word = 1;
        }
    }

    printf("So luong tu trong chuoi la: %d\n", word_count);

    return 0;
}

