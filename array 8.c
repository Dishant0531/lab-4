#include <stdio.h>

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int target[10] = {0};
    int i, j = 0;

    for (i = 0; i < 5; i++) {
        target[j] = source[i];
        j += 2;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", target[i]);
    }
    return 0;
}