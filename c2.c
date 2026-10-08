#include <stdio.h>

int main () {

    int numero1 = 2;
    int primos = 0;

    while (primos < 100) {

        int isPrimo = 1;

        for (int divisor = 2; divisor < numero1; divisor++) {

            if (numero1 % divisor == 0) {
                isPrimo = 0; 
                break;       
            }

        }

        if (isPrimo == 1) {
            primos++;    
        }

        numero1++;
    }

    printf("O 100 numero primo eh: %d\n", numero1 - 1);

    return 0;

};

