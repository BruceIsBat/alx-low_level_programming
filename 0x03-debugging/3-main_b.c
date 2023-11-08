#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;
    int mont;
    int da;
    int yer;

    month = 2;
    day = 29;
    year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);


    mont = 3;
    da = 01;
    yer = 2008;

    printf("Date: %02d/%02d/%04d\n", mont, da, yer);

    da = convert_day(mont, da);

    print_remaining_days(mont, da, yer);

    return (0);
}
