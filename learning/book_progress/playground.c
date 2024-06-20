#include <stdio.h>
#include <stdbool.h>

int main() {

    // This will print a 1. 
    _Bool flag = 5;
    printf("\nThe flag value is %i.\n", flag);
        
    // This will print a 0.
    bool another_flag = false;
    printf("\nThe other flag is %i.\n", another_flag);
    
    int grade = 3;
    switch (grade) {
        case 4: printf("Excelent\n"); 
                break;
        case 3: printf("Good\n"); 
                break;
        case 2: printf("Average\n"); 
                break;
        case 1: printf("Poor\n"); 
                break;
        case 0: printf("Bad\n"); 
                break;
        default: printf("Invalid\n");
    }
    
    int grade_2 = 1;
    switch (grade_2) {
        case 4: case 3: case 2: 
                 printf("Average\n"); 
                break;
        case 1: printf("Poor\n"); 
                // INTENTIONAL FALL THROUGH
        case 0: printf("Bad\n"); 
                break;
        default: printf("Invalid\n");
                break;
    }

    int g, sum = 0;
    printf("This program sums a series of integers.\n"); 
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &g);
    while (g != 0) { 
        sum += g; 
        scanf ("%d", &g) ;
    }
    printf("\nThe sum is: %d\n\n", sum);

    int b = 10;
    do {
        printf("T minus %d and counting\n", b);
        --b;
    } while (b > 0) ;   


    int f, n;
    printf("This program prints a table of squares. \n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (f = 1; f <= n; f++)
        printf("%10d%10d\n", f, f * f);

    return 0;
}
