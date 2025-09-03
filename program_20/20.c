
#include <stdio.h>

int findMissingID(int ids[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += ids[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int ids[] = {1, 2, 5}; // Example: N = 5, missing ID = 3
    int n = 5;

    int missingID = findMissingID(ids, n);
    printf("Missing Participant ID: %d\n", missingID);

    return 0;
}
