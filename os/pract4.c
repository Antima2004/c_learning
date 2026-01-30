#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, hungry, h[10], i, j, ch;

    printf("Dining Philosopher Problem (Simple Simulation)\n");
    printf("Enter total number of philosophers: ");
    scanf("%d", &n);

    printf("How many are hungry: ");
    scanf("%d", &hungry);

    if (hungry == n) {
        printf("\nAll are hungry — Deadlock will occur!\n");
        return 0;
    }
    for (i = 0; i < hungry; i++) {
        printf("Enter position of hungry philosopher %d (1-%d): ", i + 1, n);
        scanf("%d", &h[i]);
    }

    do {
        printf("\nMenu:\n1. One philosopher eats at a time\n2. Two philosophers eat at a time\n3. Exit\nEnter choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("\n== One philosopher eating at a time ==\n");
            for (i = 0; i < hungry; i++) {
                printf("Philosopher %d is eating\n", h[i]);
                for (j = i + 1; j < hungry; j++)
                    printf("Philosopher %d is waiting\n", h[j]);
                printf("\n");
            }
        }
        else if (ch == 2) {
            printf("\n== Two philosophers eating together (not neighbors) ==\n");
            for (i = 0; i < hungry; i++) {
                for (j = i + 1; j < hungry; j++) {
                    if (abs(h[i] - h[j]) != 1 && abs(h[i] - h[j]) != n - 1)
                        printf("Philosophers %d and %d are eating together\n", h[i], h[j]);
                }
            }
        }

        else if (ch == 3)
            exit(0);

        else
            printf("Invalid choice!\n");

    } while (1);
    return 0;
}
