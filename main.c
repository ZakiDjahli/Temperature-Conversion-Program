#include <stdio.h>
#include <math.h>

int main () {
    // Temperature conversion Program:
    
    char cohice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Welcome to the Temperature conversion Program!\n");
    printf("C. Enter \"C\" For celsius to fahrenheit\n");
    printf("F. Enter \"F\" For fahrenheit to Celsius\n");
    printf(" Enter \"F\" OR \"C\": ");
    
    scanf("%c", &cohice);

    if (cohice == 'C') {
        // Celsius to fahrenheit
        printf("Enter The Temperature in Celsius \"(C)\": ");
        scanf("%f", &celsius);
        
        fahrenheit = (celsius * 9 / 5) + 32; // From C to F
        printf("%.1f celsius are equal to %.1f fahrenheit", celsius, fahrenheit);
        
    } else if (cohice == 'F') {
        // Fahrenheit to Celsius
        printf("Enter The Temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit are equal to %.1f Celsius", fahrenheit, celsius);
        
    } else {
        printf("You Typed it wrong, Choose C or F in Capital Case");
    }

    return 0;
};