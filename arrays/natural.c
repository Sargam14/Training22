#include <stdio.h>

int main() {
    int numbers[10];

   
    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 1;
    }

   
    printf("The first 10 natural numbers are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

