#include <stdio.h>

int main() {
    int num;

    if (scanf("%d", &num) == 1) {
        int matched = 0;

        if (num % 3 == 0) {
            printf("Pling");
            matched = 1;
        }
        if (num % 5 == 0) {
            printf("Plang");
            matched = 1;
        }
        if (num % 7 == 0) {
            printf("Plong");
            matched = 1;
        }

        // If not divisible by 3, 5, or 7, print the original number
        if (!matched) {
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
