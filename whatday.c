#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int day, dayCounter, month, January;
    char dayName[10], monthName[10];
    January = 30;
    printf("Enter the month of the year as a numerical value: ");
    scanf("%d", &month);
    if ( month < 1 || month > 12){
        printf("bork\n");
        return EXIT_FAILURE;
    };
    printf("Enter the day of the month as a numerical value: ");
    scanf("%d", &day);
    if (day < 1){
        printf("boork\n");
        return EXIT_FAILURE;
    }
    if (day > 28 && month == 2){
        printf("booork\n");
        return EXIT_FAILURE;
    }
    if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)){
        printf("booork\n");
        return EXIT_FAILURE;
    }
    else if (day > 31){
        printf("boooork\n");
        return EXIT_FAILURE;
    }
    switch (month){
        case 1:
            dayCounter = (day - 1)%7;
            strcpy(monthName, "January");
            break;
        case 2:
            dayCounter = (day + 2)%7;
            strcpy(monthName, "February");
            break;
        case 3:
            dayCounter = (day + 2)%7;
            strcpy(monthName, "March");
            break;
        case 4:
            dayCounter = (day + 5)%7;
            strcpy(monthName, "April");
            break;
        case 5:
            dayCounter = (day+5)%7;
            strcpy(monthName, "May");
            break;
        case 6:
            dayCounter = (day + 3)%7;
            strcpy(monthName, "June");
            break;
        case 7:
            dayCounter = (day + 5)%7;
            strcpy(monthName, "July");
            break;
        case 8:
            dayCounter = day%7;
            strcpy(monthName, "August");
            break;
        case 9:
            dayCounter = (day + 4)%7;
            strcpy(monthName, "September");
            break;
        case 10:
            dayCounter = (day - 1)%7;
            strcpy(monthName, "October");
            break;
        case 11:
            dayCounter = (day + 1)%7;
            strcpy(monthName, "November");
            break;
        case 12:
            dayCounter = (day + 4)%7;
            strcpy(monthName, "December");
            break;
        default:
            printf("I thought I sanitised the input...\n");
            return EXIT_FAILURE;
            break;
    }
    switch (dayCounter){
        case 0:
            strcpy(dayName, "Sunday");
            break;
        case 1:
            strcpy(dayName,"Monday");
            break;
        case 2:
            strcpy(dayName, "Tuesday");
            break;
        case 3:
            strcpy(dayName, "Wednesday");
            break;        
        case 4:
            strcpy(dayName, "Thursday");
            break;
        case 5:
            strcpy(dayName, "Friday");
            break;
        case 6:
            strcpy(dayName, "Saturday");
            break;
        default:
            printf("bork");
            return EXIT_FAILURE;
            break;
    }
    printf("The %d of %s was a %s in 2017\n", day, monthName, dayName);
}
