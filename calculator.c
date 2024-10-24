#include <stdio.h>

// Function to calculate square
double square(double num) {
    return num * num;
}

// Function to calculate cube
double cube(double num) {
    return num * num * num;
}

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    printf("Square of %.2lf is %.2lf\n", number, square(number));
    printf("Cube of %.2lf is %.2lf\n", number, cube(number));

    return 0;
}

