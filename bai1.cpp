#include <stdio.h>

int main() {
    int num;

    // Y�u cau nguoi d�ng nhap v�o mot so nguyen
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // Kiem tra so duong, so am hay so 0
    if (num > 0) {
        printf("So %d l� so duong.\n", num);
    } else if (num < 0) {
        printf("So %d l� so am.\n", num);
    } else {
        printf("So %d l� so 0.\n", num);
    }

    return 0;
}

