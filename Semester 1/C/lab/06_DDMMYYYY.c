/*
Write a C program to create a structure to store Date in the format DD/MM/YYYY. Using the structure.
Initialize two structure variables D1 and D2 and calculate the number of days elapsed between D2 and DI (in DD/MM/YYYY format itself).
(Assume there are 30 days in every month & D2>DI).
*/
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};

void main()
{
    struct date D,D1,D2;
    printf("Enter the day: ");
    scanf("%d", &D2.day);
    printf("Enter the month: ");
    scanf("%d", &D2.month);
    printf("Enter the year: ");
    scanf("%d", &D2.year);
    printf("Date 2: %d/%d/%d\n", D2.day, D2.month, D2.year);

    printf("Enter the day: ");
    scanf("%d", &D1.day);
    printf("Enter the month: ");
    scanf("%d", &D1.month);
    printf("Enter the year: ");
    scanf("%d", &D1.year);
    printf("Date 1: %d/%d/%d\n", D1.day, D1.month, D1.year);

    D.day = D2.day - D1.day;
    D.month = D2.month - D1.month;
    D.year = D2.year - D1.year;

    printf("Elapsed date: %d", D.day + (D.month*30) + (D.year*360));
}