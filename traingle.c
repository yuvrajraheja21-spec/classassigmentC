#include <stdio.h>

int main() {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        // Validate strictly positive side lengths and triangle inequality theorem
        if (a > 0 && b > 0 && c > 0 && 
            (a + b >= c) && (b + c >= a) && (a + c >= b)) {
            
            // Classify triangle type
            if (a == b && b == c) {
                printf("Equilateral\n");
            } else if (a == b || b == c || a == c) {
                printf("Isosceles\n");
            } else {
                printf("Scalene\n");
            }
        } else {
            printf("Invalid\n");
        }
    }

    return 0;
}
