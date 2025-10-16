#include <stdio.h>

int main() {
    float obtained, total, percentage;
    
    printf("=== Percentage Calculator ===\n");
    
    printf("Enter obtained marks: ");
    scanf("%f", &obtained);
    
    printf("Enter total marks: ");
    scanf("%f", &total);
    
    // Calculate percentage
    percentage = (obtained / total) * 100;
    
    printf("\n--- Result ---\n");
    printf("Obtained Marks: %.2f\n", obtained);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    // Grade calculation (bonus feature)
    if(percentage >= 90) printf("Grade: A+\n");
    else if(percentage >= 80) printf("Grade: A\n");
    else if(percentage >= 70) printf("Grade: B\n");
    else if(percentage >= 60) printf("Grade: C\n");
    else if(percentage >= 50) printf("Grade: D\n");
    else printf("Grade: F (Fail)\n");
    
    return 0;
}