#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <number1> <number2>\n", argv[0]);
        return 1;
    }
    
    int number1 = atoi(argv[1]); // Convert the first console input argument to an integer
    int number2 = atoi(argv[2]); // Convert the second console input argument to an integer
    
    /* It must be verified that the entered numbers are greater than or equal to zero */
    if (number1 < 0 || number2 < 0) {
        fprintf(stderr, "The numbers must be greater than or equal to zero\n");
        return 1;
    }
    
    long long int fact = 1;
    
    /* Calculate the factorial of the first input argument */
    for (int i = 1; i <= number1; i++) {
        fact *= i;
    }

    /* Print the result */
    printf("The factorial of %d is: %lld\n", number1, fact);
    
    /* Check if the first argument is a prime number */
    if (number1 > 1) {
        int isPrime = 1;
        for (int i = 2; i <= number1 / 2; i++) {
            if (number1 % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime number\n", number1);
        } else {
            printf("%d is not a prime number\n", number1);
        }
    } else {
        printf("%d is not a prime number\n", number1);
    }

    /* Additional part for the second input argument */
    printf("./fact %d %d\n", number1, number2);
    
    return 0;
}
