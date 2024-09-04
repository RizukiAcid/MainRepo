#include <stdio.h>

int main() {
    int N, M;

    // Read the input values N and M
    scanf("%d %d", &N, &M);

    // Output M numbers starting from N
    for (int i = 0; i < M; i++) {
        printf("%d\n", N + i);
    }

    // Print a newline character at the end
    printf("\n");

    return 0;
}