#include <stdio.h>

int main() {
    int num;

    // Yêu c?u ngý?i dùng nh?p vào m?t s? nguyên
    printf("Nh?p m?t s? nguyên: ");
    scanf("%d", &num);

    // Ki?m tra n?u s? chia h?t cho 3, 5 ho?c c? hai
    if (num % 3 == 0 && num % 5 == 0) {
        printf("S? %d chia h?t cho c? 3 và 5.\n", num);
    } else if (num % 3 == 0) {
        printf("S? %d chia h?t cho 3.\n", num);
    } else if (num % 5 == 0) {
        printf("S? %d chia h?t cho 5.\n", num);
    } else {
        printf("S? %d không chia h?t cho 3 hay 5.\n", num);
    }

    return 0;
}

