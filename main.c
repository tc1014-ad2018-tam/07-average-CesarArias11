/*
 * This program calculates the average of a series of numbers given by the user.
 * The addition of numbers will continue until the user submits 0, in this moment the program will subtract 1.
 * So that the number 0 won't be included as part of the average.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date> September 6th, 2018
 * Email: a01411995@itesm.mx
 *
 */
#include <stdio.h>

    // My variables are declared here.
    int main() {
    double n; // This is the numbers that will be summed.
    double add = 0; // The variable were the summed numbers will be stored.
    int k = 0; // The total amount of numbers.
    double average; // The summed numbers divided by the total amount of numbers.

    // This is an advice so that the user knows how to stop the loop.
    printf("ADVICE: When you want to know the average submit 0, this number won't be included in the average.\n");

    // The loop starts here.
    do {

        printf("Give me a number: \n"); // This will ask the user for the numbers.
        scanf("%lf", &n);

        add += n; // Add will store the sum of the numbers.
        k += 1; // k will store the amount of numbers.

    } while (n != 0); // By submitting 0, the program stops. (Won't be included)

    k -= 1;
    average = add / k;
    printf("The average of the %d numbers is: %lf.", k, average);

    return 0;

}