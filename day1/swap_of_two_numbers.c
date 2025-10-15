#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("The number before swapping: %d %d",a,b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("The number after swapping: %d %d",a,b);
    return 0;
}