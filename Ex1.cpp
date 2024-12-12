#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Chuoi ban vua nhap: %s\n", str);
    printf("Do dai cua chuoi la: %lu\n", strlen(str));

    return 0;
}

