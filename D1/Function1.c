
#include<assert.h>
#include<stdio.h>
#include"header.h"

int main()
{



   //1. Convert Upper case to Lower case.

    printf("\n\n program to converts upper case to lower.\n");
    assert(lower_case('Z') == 'z');
    assert(lower_case('G') == 'g');
    assert(lower_case('90') == 'INVALID');


    //2. Calculate the area of circle.

    printf("\n\n  program to calculate the area of circle.\n");
    float radius;
    printf("\n\tEnter the Radius of the Circle : ");
    scanf("%f", &radius);
    printf("\n\tArea of the Circle             : %d \n",circle_area(radius));


//3.Program to find the number of charaters

    printf("/n\n Program to find the number of charaters\n")
    char start, end;
    printf("Enter the start character: ");
    scanf("%c", &start);
    printf("Enter the end character: ");
    scanf(" %c", &end);
    printf("Characters between %c and %c are: ", start, end);
    print_characters_between(start, end);



    // 4. Fahrenheit to Celsius and Celsius to Fahrenheit conversion.
    printf("\n\n 3. program to convert temperature from Celsius to Fahrenheit and \n    Fahrenheit to Celsius\n");
    float fahrenheit, celsius;
    printf("\n\tEnter Temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);
    printf("\n\tCelsius                         : %f\n",fahrenheit_to_celsius(fahrenheit));
    printf("\n\tEnter Temperature in Celsius    : ");
    scanf("%f", &celsius);
    printf("\n\tFahrenheit                      : %f",celsius_to_fahrenheit(celsius));

    //5 To check whether the given number is odd or even

    printf("\n\n 5. Check if entered number is even or odd.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(odd_or_even(34) == EVEN);
    assert(odd_or_even(97) == ODD);

    //6. To check whether the given number is leap year or not.

    printf("\n\n 6. Check if entered year is leap year or not.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(is_leap_year(2021) == FALSE);
    assert(is_leap_year(2020) == TRUE);
    assert(is_leap_year(-1000) == INVALID);

    //7. Find power of 2^N using left shift operator.

    printf("\n\n 7. WAP to find power of 2^N using left shift operator\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(power_of_2(1) == 1);
    assert(power_of_2(8) == 64);
    assert(power_of_2(-800) == INVALID); //returns INVALID if number is negative


    return 0;

    //8.Program to check if the input is integer or charater

     printf("\n\n 8.Program to check if the input is integer or charater")
    char c;
    int  i;
    printf("Enter a character or integer");
    if (scanf("%d", &i) == 1) {
        printf("You entered an integer");
    } else if (scanf(" %c", &c) == 1) {
        printf("You entered a character");
        printf("Invalid input!\n");
    }


//9. Program to find the sum of two random numbers

    printf("\n\n generate 2 random number and find its sum")
    int randomN1,randomN2, sum;
    srand(time(0));
   randomN1 = rand() % 100 + 1;
   printf("Randomn Number 1: %d\n", randomN1);
   randomN2= rand() % 100 + 1;
   printf("Random Number 2: %d\n", randomN2);
   sum = randomN1 + randomN2;
   printf("Sum: %d\n", sum);

    return 0;
}
