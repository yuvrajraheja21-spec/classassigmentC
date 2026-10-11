#include <stdio.h>

int main() {
    char c1, c2;

    if (scanf(" %c %c", &c1, &c2) == 2) {
        // Process first character
        if (c1 >= 'a' && c1 <= 'z') {
            printf("lowercase\n");
            printf("%c\n", c1 - ('a' - 'A'));
        } else if (c1 >= 'A' && c1 <= 'Z') {
            printf("uppercase\n");
            printf("%c\n", c1 + ('a' - 'A'));
        }

        // Process second character
        if (c2 >= 'a' && c2 <= 'z') {
            printf("lowercase\n");
            printf("%c\n", c2 - ('a' - 'A'));
        } else if (c2 >= 'A' && c2 <= 'Z') {
            printf("uppercase\n");
            printf("%c\n", c2 + ('a' - 'A'));
        }
    }

    return 0;
}
