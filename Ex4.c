#include <stdio.h>

int main() {
  
    char str[] = "Hello, World!";

    char check;
    printf("Nhap vao mot ky tu: ");
    scanf("%c", &check);  

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == check) {
            count++; 
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", check, count);

    return 0;
}

