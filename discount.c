#include <stdio.h>

int main() {
    int price1, qty1, price2, qty2;

    if (scanf("%d %d %d %d", &price1, &qty1, &price2, &qty2) == 4) {
        double total = (double)(price1 * qty1 + price2 * qty2);
        double final_amount;

        if (total > 5000) {
            printf("Mega Discount\n");
            final_amount = total * 0.80;
        } else if (total > 2000) {
            printf("Standard Discount\n");
            final_amount = total * 0.90;
        } else {
            printf("No Discount\n");
            final_amount = total;
        }

        printf("%.2f\n", final_amount);
    }

    return 0;
}
