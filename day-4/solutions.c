#include <stdio.h>

int main() {
    int array[] = {12, 84, 20, 36, 64, 56, 72, 10, 45, 90};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    // Calculate the sum of the elements
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    // Calculate the average
    float average = (float)sum / length;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
2.
#include <stdio.h>
#include <limits.h>

int main() {
    int array[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int length = sizeof(array) / sizeof(array[0]);

    int min = INT_MAX;  
    int max = INT_MIN;  

    
    for (int i = 0; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
3.
#include <stdio.h>

int main() {
    int array[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }

    printf("\nReversed Array: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
4.
#include <stdio.h>

int main() {
    int array[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int length = sizeof(array) / sizeof(array[0]);

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            sumEven += array[i];
        } else {
            sumOdd += array[i];
        }
    }

    int difference = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference between even and odd elements: %d\n", difference);

    return 0;
}
5.
#include <stdio.h>

int main() {
    int array[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int length = sizeof(array) / sizeof(array[0]);

    int sumEvenIndexed = 0;
    int sumOddIndexed = 0;

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            sumEvenIndexed += array[i];
        } else {
            sumOddIndexed += array[i];
        }
    }

    int difference = sumEvenIndexed - sumOddIndexed;

    printf("Sum of even-indexed elements: %d\n", sumEvenIndexed);
    printf("Sum of odd-indexed elements: %d\n", sumOddIndexed);
    printf("Difference between even-indexed and odd-indexed elements: %d\n", difference);

    return 0;
}