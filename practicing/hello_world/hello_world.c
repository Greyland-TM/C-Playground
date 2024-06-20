#include <stdio.h>

#define PI 3.14159

float calculate_volume(float radius) {
    float radius_cubed = radius * radius * radius;
    float value = 4.0 / 3.0 * PI * radius_cubed;
    return value;
}

// Can I comment in c?  
int main(void) {
    int starting = 0;
    int loop_number = 10;
    int base_8 = 022;
    float f;
    
    // for (i=0; i<loop_number; i++;) {
    //      printf("Hello World For time #%d\n", i);
    // };
    printf("This program uses C version: %ld\n", __STDC_VERSION__);
    printf("Hello World For time #%d\n", loop_number); 
    printf("\nEnter a floating point number: ");
    scanf("%f", &f);
    printf("You entered: %.1f\n", f);
    float volume = calculate_volume(f);

    // Something interesting and confusing - both of these errors produce the same incorrect vlue. Why? idk 
    printf("the volume of %.1f is %.1f\n", f , volume);
    printf("Not specified: %d\n");
    printf("Incorrect conversion specification for volume: %d\n", volume);
    printf("|%d|%5d|%-5d|%-5.3d|\n", loop_number, loop_number, loop_number , loop_number);
    printf("|%10.3f|%10.3e|%-10g|\n\a", volume, volume, volume);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("\"Hello!\"\n");

    int numl, denoml, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: "); 
    scanf("%d/%d", &numl, &denoml);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = numl * denom2 + num2 * denoml;
    result_denom = denoml * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);
    printf("Base 8 binary: %i\n", base_8);

    // Interesting
    i = l;
    k = l + (j = i) ;
    printf("%d %d %d\n", i, j, k); /* prints "1 1 2" */
    return 0;
}
