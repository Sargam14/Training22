#include <stdio.h>

int main() {
    int res;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 1 to %d): ", n-1, n);

   
    int sum = (n * (n + 1)) / 2; 

    int summ = 0; 

    
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        summ += arr[i];
    }

   
    res = sum - summ;
    printf("The missing number is: %d\n", res);

    return 0;
}



