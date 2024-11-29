#include <stdio.h>

     int add(a,b);
     int subtract(a,b);
     int multiply(a,b);
     float divide(a,b);
     int mod(a,b);

    int main() {
	
    int choice, num1, num2;
    char cont;

    do {
     
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %\n");
        printf("Press 0 for exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);

    
        if (choice == 0) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

       
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

     
        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                printf("Division of %d and %d is %.2f\n", num1, num2, divide(num1, num2));
                break;
            case 5:
                printf("Modulo of %d and %d is %d\n", num1, num2, mod(num1, num2));
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

      
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &cont);
    } 
	
	while (cont == 'y' || cont == 'Y');

    return 0;
}


    int add(a,b) {
    return a + b;
}

    int subtract(a,b) {
    return a - b;
}

    int multiply(a,b) {
    return a * b;
}

    float divide(a,b) {
    return (float)a / b;
}

    int mod(a,b) {
    return a % b;
}
