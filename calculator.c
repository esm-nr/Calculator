#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14

void menu() {
    printf("\n*** CALCULATOR ***\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Sine (sin)\n");
    printf("6. Cosine (cos)\n");
    printf("7. Tangent (tan)\n");
    printf("8. Cotangent (cot)\n");
    printf("9. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, degree, result;

    do {
        menu();
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                if (num2 == 0)
                    printf("Error: Division by zero is not allowed!\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;

            case 5:
                printf("Enter angle in degrees: ");
                scanf("%lf", &degree);
                result = sin(degree * PI / 180);
                printf("Sin(%.2lf) = %.4lf\n", degree, result);
                break;

            case 6:
                printf("Enter angle in degrees: ");
                scanf("%lf", &degree);
                result = cos(degree * PI / 180);
                printf("Cos(%.2lf) = %.4lf\n", degree, result);
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &degree);
                result = tan(degree * PI / 180);
                printf("Tan(%.2lf) = %.4lf\n", degree, result);
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &degree);
                if (fmod(degree, 180.0) == 0) {
                    printf("Error: Cotangent is undefined at this angle!\n");
                } else {
                    result = 1.0 / tan(degree * PI / 180);
                    printf("Cot(%.2lf) = %.4lf\n", degree, result);
                }
                break;

            case 9:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 9.\n");
        }

    } while(choice != 9);

    return 0;
}

