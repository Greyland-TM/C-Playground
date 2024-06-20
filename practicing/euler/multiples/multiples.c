#include <stdio.h>

int main() {
    int test_number = 1000;
    int result = 0;

    for (int i=0; i<test_number; i++) 
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    
    printf("The result is %d\n", result);
    return 0;
}
