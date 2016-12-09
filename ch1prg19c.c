// Author: John Raschedian - http://raschedian.com
// Date: 12/9/2016
// Program filename: ch1prg19c.c
// Program Description: In this program, you'll learn how to create a weekly temperature report.
// The user inputs all the values of temperature related to all the week days through the console.
// The values will be assigned to the corresponding variables in the program.

#include <stdio.h>
int main() {
    // Declaration
    float   mon_avr_temp,
            tue_avg_temp,
            wed_avg_temp,
            thu_avg_temp,
            fri_avg_temp,
            sat_avg_temp,
            sun_avg_temp,
            week_total_temp,
            week_avg_temp;
    // Input
    printf("Please enter the average temperature for every week day one by one.\n");
    printf("Monday: ");
    scanf("%f", &mon_avr_temp);
    printf("Tuesday: ");
    scanf("%f", &tue_avg_temp);
    printf("Wednesday: ");
    scanf("%f", &wed_avg_temp);
    printf("Thursday: ");
    scanf("%f", &thu_avg_temp);
    printf("Friday: ");
    scanf("%f", &fri_avg_temp);
    printf("Saturday: ");
    scanf("%f", &sat_avg_temp);
    printf("Sunday: ");
    scanf("%f", &sun_avg_temp);
    // Processing
    week_total_temp = mon_avr_temp + tue_avg_temp + wed_avg_temp + thu_avg_temp + fri_avg_temp + sat_avg_temp + sun_avg_temp;
    week_avg_temp = week_total_temp / 7;
    // Output
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\tWeekly Average Temprature\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Monday\tTuesday\tWednesday\tThursday\tFriday\tSaturday\tSunday\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("%f\t%f\t%f\t%f\t%f\t%f\t%f\n", mon_avr_temp, tue_avg_temp, wed_avg_temp, thu_avg_temp, fri_avg_temp, sat_avg_temp, sun_avg_temp);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Weekly Total Tempreture: %f\t\tWeekly Average Tempreture: %f\n", week_total_temp, week_avg_temp);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    return 0;
}








