#include <stdio.h>

int main() {
    char color1, color2;
    int d1 = -1, d2 = -1;

    if (scanf(" %c %c", &color1, &color2) == 2) {
        // Convert first color character to digit
        switch (color1) {
            case 'K': d1 = 0; break;
            case 'W': d1 = 1; break;
            case 'R': d1 = 2; break;
            case 'G': d1 = 3; break;
            case 'B': d1 = 4; break;
            default:  d1 = -1; break;
        }

        // Convert second color character to digit
        switch (color2) {
            case 'K': d2 = 0; break;
            case 'W': d2 = 1; break;
            case 'R': d2 = 2; break;
            case 'G': d2 = 3; break;
            case 'B': d2 = 4; break;
            default:  d2 = -1; break;
        }

        // If either color is invalid, print -1; otherwise, calculate the 2-digit number
        if (d1 == -1 || d2 == -1) {
            printf("-1\n");
        } else {
            printf("%d\n", d1 * 10 + d2);
        }
    }

    return 0;
}
