#include <stdio.h>

int main() {
    int num;

    // Y�u c?u ng�?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nh?p m?t s? nguy�n: ");
    scanf("%d", &num);

    // Ki?m tra s? ch?n hay l?
    if (num % 2 == 0) {
        printf("S? %d l� s? ch?n.\n", num);
    } else {
        printf("S? %d l� s? l?.\n", num);
    }

    return 0;
}

