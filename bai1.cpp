#include <stdio.h>

int main() {
    int num;

    // Yêu cau nguoi dùng nhap vào mot so nguyen
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // Kiem tra so duong, so am hay so 0
    if (num > 0) {
        printf("So %d là so duong.\n", num);
    } else if (num < 0) {
        printf("So %d là so am.\n", num);
    } else {
        printf("So %d là so 0.\n", num);
    }

    return 0;
}

