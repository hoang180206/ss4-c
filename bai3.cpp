#include <stdio.h>

int main() {
    int num;

    // Y�u c?u ng�?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nh?p m?t s? nguy�n: ");
    scanf("%d", &num);

    // Ki?m tra n?u s? chia h?t cho 3, 5 ho?c c? hai
    if (num % 3 == 0 && num % 5 == 0) {
        printf("S? %d chia h?t cho c? 3 v� 5.\n", num);
    } else if (num % 3 == 0) {
        printf("S? %d chia h?t cho 3.\n", num);
    } else if (num % 5 == 0) {
        printf("S? %d chia h?t cho 5.\n", num);
    } else {
        printf("S? %d kh�ng chia h?t cho 3 hay 5.\n", num);
    }

    return 0;
}

