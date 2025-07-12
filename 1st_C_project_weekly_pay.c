#include <stdio.h>

int main() {
    double yearlysalary, monthlysalary, weeklysalary, dailysalary; //double is simply a more precise version of floats
if (yearlysalary <=0) {
    printf("Invalid input. Please enter a positive number to calcuulate your salary\n");
}
    printf("input your yearly salary: ");
    scanf("%lf", &yearlysalary); //scanf is used to get user input, %lf is for to expect a double as input

    monthlysalary = yearlysalary/12.0;
    weeklysalary = yearlysalary/52.0;
    dailysalary = yearlysalary/365.0;

    printf("your monthly salary is %.2f.\n", monthlysalary);
    printf("your weekly salary is %.2f.\n", weeklysalary);
    printf("your daily salary is %.2f.\n", dailysalary);


    return 0;
}