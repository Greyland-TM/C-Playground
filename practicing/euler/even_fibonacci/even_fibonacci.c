#include <stdio.h>

int main() {
    long max = 4000000;
    int current_number = 1;
    int previous_number = 1;
    int current_sum = 0;

    while (current_number <= max) {
        int next_number = current_number + previous_number;

        if (next_number % 2 == 0) {
            current_sum += next_number;
        }

        previous_number = current_number;
        current_number = next_number;
    }

    printf("\nCurrent sum: %d\n\n", current_sum);
    return 0;
}
