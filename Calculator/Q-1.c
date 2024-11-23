#include <stdio.h>


int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}


float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}


int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    int choice, num1, num2;
    float result;

    
    while (1) {
        
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
           
            printf("Exiting the program...\n");
            break;
        }

        
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Addition of %d and %d is %.2f\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Subtraction of %d and %d is %.2f\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Multiplication of %d and %d is %.2f\n", num1, num2, result);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Division of %d and %d is %.2f\n", num1, num2, result);
                }
                break;
            case 5:
                result = mod(num1, num2);
                if (num2 != 0) {
                    printf("Modulus of %d and %d is %d\n", num1, num2, (int)result);
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

