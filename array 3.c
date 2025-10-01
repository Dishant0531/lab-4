#include <stdio.h>

int main() {
    int values[5], i, j, temp;
    char choice;


    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }
    printf("Enter 'a' for ascending or 'd' for descending sort: ");
    scanf(" %c", &choice);


    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
