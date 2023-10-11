#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Nhap 10 so:\n");
    for (i = 0; i < 10; i++) {
        printf("So %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Output: ");
    for ( i = 9; i >= 0; i--) {
        printf("%d", numbers[i]);
        if (i != 0) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}