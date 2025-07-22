#include <stdio.h>

int main() {
int number, first_digit, second_digit, third_digit, fourth_digit, sum;

printf("THIS IS MY FOUR DIGIT NUMBER SUM CALCULATOR\n");
printf("Enter a four-digit number:\n");


if(scanf("%d", &number) !=1) {
    printf("Invalid input. Please enter a four-digit number:\n");
    return 1;
}

if(number < 1000 || number > 9999) {
    printf("Invalid input. Please enter a four-digit number\n");
    return 1;
}

first_digit = number / 1000; //to get the first digit
second_digit = (number / 100) % 10; //to get the second digit
third_digit = (number / 10) % 10; //to get the third digit
fourth_digit = (number % 10); //to get the fourth digit
sum = first_digit + second_digit + third_digit + fourth_digit; //to sum up all the numbers
printf("\nFINAL BREAKDOWN AND ANSWER\n");
printf("\nsum = %d + %d + %d + %d = %d\n", first_digit, second_digit, third_digit, fourth_digit, sum);
printf("\nThe sum of all the digits in %d is %d\n", number, sum);


return 0;
}
