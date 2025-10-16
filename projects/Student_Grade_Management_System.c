#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float marks1, marks2, marks3;
    float total, percentage;

    // Input
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &rollNo);
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    // Calculation
    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

    // Grade calculation
    char *grade;
    if (percentage >= 90) grade = "A+";
    else if (percentage >= 80) grade = "A";
    else if (percentage >= 70) grade = "B";
    else if (percentage >= 60) grade = "C";
    else if (percentage >= 50) grade = "D";
    else grade = "F";

    // Output
    printf("\n--- Student Report ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNo);
    printf("Marks: %.2f, %.2f, %.2f\n", marks1, marks2, marks3);
    printf("Total Marks: %.2f/300\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %s\n", grade);

    return 0;
}