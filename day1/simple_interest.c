#include<stdio.h>

int main(){
    float principal, rate, n,interest;
    printf("Enter the principal amount, rate and no of years: ");
    scanf("%f%f%f",&principal,&rate,&n);
    interest=(principal*rate*n)/100;
    printf("\n--- Calculation Results ---\n");
    printf("Principal: ₹%.2f\n", principal);
    printf("Rate: %.2f%% per year\n", rate);
    printf("Time: %.2f years\n", n);
    printf("Simple Interest: ₹%.2f\n", interest);
    printf("Total Amount: ₹%.2f\n", principal + interest);
    return 0;
}