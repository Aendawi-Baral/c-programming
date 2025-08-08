#include <stdio.h>

int main() {
    float mark1, mark2, average;
    printf("Enter marks for subject 1: ");
    scanf("%f", &mark1);  
    printf("Enter marks for subject 2: ");
    scanf("%f", &mark2);  
    average = (mark1 + mark2) / 2;
    printf("Average marks: %.2f\n", average);
    printf("Result: %s\n", (mark1 >= 40 && mark2 >= 40) ? "Passed" : "Failed");
    return 0;
}
