// Author: John Raschedian - http://raschedian.com
// Date: 12/9/2016
// Program filename: ch1prg18c.c
// Program Description: In this program, you're going to learn how
// to write a program that accepts the details of a student's marks
// report through the console and based on the data, issues a marks report.


#include <stdio.h>
int main() {
    // Declaration
    char name;
    int grade, roll_no;
    float s1, s2, s3, s4, s5, total_marks, average_marks;
    // Input
    printf("Please enter the following information related to the student.\n");
    printf("The first letter of Name: ");
    scanf("%c", &name);
    printf("Grade: ");
    scanf("%d", &grade);
    printf("Roll Number: ");
    scanf("%d", &roll_no);
    printf("Now please enter the marks for each subject one by one.\n");
    printf("Subject 1: ");
    scanf("%f", &s1);
    printf("Subject 2: ");
    scanf("%f", &s2);
    printf("Subject 3: ");
    scanf("%f", &s3);
    printf("Subject 4: ");
    scanf("%f", &s4);
    printf("Subject 5: ");
    scanf("%f", &s5);
    // Processing
    total_marks = s1 + s2 + s3 + s4 + s5;
    average_marks = total_marks / 5;
    // Output
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\tMarks Report\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Name: %c\tGrade: %d\tRoll No.: %d\n", name, grade, roll_no);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Subject:\tSubject 1\tSubject 2\tSubject 3\tSubject 4\tSubject 5\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Marks:\t%f\t%f\t%f\t%f\t%f\n", s1, s2, s3, s4, s5);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Total Marks: %f\t\t%f", total_marks, average_marks);
    return 0;
}
