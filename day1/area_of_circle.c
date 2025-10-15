#include<stdio.h>

int main(){
    int r;
    float pie=3.14;
    float area;
    printf("Enter the radius to calculate the circle: ");
    scanf("%d",&r);
    area=r*r*pie;
    printf("The area of circle is: %.2f",area);
    return 0;
}