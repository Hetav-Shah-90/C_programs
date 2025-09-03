#include <stdio.h>

int main() {
    int n ;
    printf("Enter the lines of pyramid you want to print: \n");
    scanf("%d",&n);
    // Top half including the middle line
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int s = n; s > i; s--) {
            printf("  ");
        }

        // Decreasing numbers from i down to 1
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Increasing numbers from 2 up to i
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    // Bottom half (excluding middle line)
    for (int i = 2; i <= n; i++) {
        // Leading spaces
        for (int s = n; s > i; s--) {
            printf("  ");
        }

        // Decreasing numbers from i down to 1
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Increasing numbers from 2 up to i
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
