#include <stdio.h>

int main() {
    int score;
    char grade;

    // input score
    printf("Enter the student score: ");
    scanf("%d", &score);

    // input grade
    printf("Enter the student grade (A, B, C, D, or F): ");
    scanf(" %c", &grade); 

   
    printf("Your score is %d and Grade is %c.\n", score, grade);

    return 0;
}

