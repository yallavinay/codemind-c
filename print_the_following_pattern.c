#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int row, col, spaces, digits;
    for (row = 1; row <= N; row++) {
        spaces = N - row;
        digits = 2 * row - 1;

        // Print spaces
        for (col = 1; col <= spaces; col++) {
            printf(" ");
        }

        // Print digits
        for (col = 1; col <= digits; col++) {
            printf("%d", row);
        }

        printf("
");
    }

    return 0;
}
