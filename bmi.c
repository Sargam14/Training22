#include <stdio.h>

int main() {
    float weight, height, bmi;
	// input for weight
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

	//input for height
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the BMI
    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}

