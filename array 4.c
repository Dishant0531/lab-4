#include <stdio.h>

int main() {
    int amount, original_amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0};
    int i;

    printf("Enter the amount: ");
    scanf("%d", &amount);
    original_amount = amount;

    for(i = 0; i < 9; i++) {
        if(amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    printf("Minimum number of notes for %d are:\n", original_amount);
    for(i = 0; i < 9; i++) {
        if(count[i] != 0) {
            printf("%d note(s) of %d Rs.\n", count[i], notes[i]);
        }
    }

    return 0;
}
