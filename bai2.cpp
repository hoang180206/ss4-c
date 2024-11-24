#include <stdio.h>

int main() {
    int num;

    // Yêu c?u ngý?i dùng nh?p vào m?t s? nguyên
    printf("Nh?p m?t s? nguyên: ");
    scanf("%d", &num);

    // Ki?m tra s? ch?n hay l?
    if (num % 2 == 0) {
        printf("S? %d là s? ch?n.\n", num);
    } else {
        printf("S? %d là s? l?.\n", num);
    }

    return 0;
}

