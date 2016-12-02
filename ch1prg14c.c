// Author: John Raschedian - http://raschedian.com
// Date: 12/02/2016
// Program filename: ch1prg14c.c
// Program Description: In this program, you'll learn
// how to create the following marks report.

#include <stdio.h>
int main() {
    char name = 'A';
    int class_number = 11, roll_no = 25;
    float s1 = 80, s2 = 75.8, s3 = 79.5, s4 = 92, s5 = 89;
    float total_marks = s1 + s2 + s3 + s4 + s5;
    float average_marks = total_marks / 5;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\tMarks Report\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Name: %c\t\tClass: %d\t\tRoll No.: %d\n", name, class_number, roll_no);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Subjects:S1\t\tS2\t\tS3\t\tS4\t\tS5\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Marks:\t%f\t%f\t%f\t%f\t%f\n", s1, s2, s3, s4, s5);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Total Marks: %f\t\t\tAverage Marks: %f\n\n\n", total_marks, average_marks);
    return 0;
}

// Output:
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                             Marks Report
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Name: A                Class: 11          Roll No.: 25
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Subjects:   s1             s2           s3            s4            s5
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Marks:      80.000000      75.800003    79.500000    92.000000      89.000000
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Total Marks: 415.2999988                   Average Marks: 83.259995
*/

//  Note: The value assigned to variable s2 is 75.8 but for some reason, the value has been taken as 75.800003. This will be corrected 
//  in the following programs. The reason is not known yet.
