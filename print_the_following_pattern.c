#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int row, col;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (col == row)
                printf("0");
            else
                printf("x");
        }
        printf("
");
    }

    return 0;
}
