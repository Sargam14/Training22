#include <stdio.h>
#define PI 3.14
 
int main() {
    float radius, area, circumference;
 
    //  radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
 
    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
 
    // output
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
 
    return 0;
}
