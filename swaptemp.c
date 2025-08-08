#include <stdio.h>

int main() {
int a, b, c, temp;
 printf("Enter first number (a): ");
scanf("%d", &a);
printf("Enter second number (b): ");
scanf("%d", &b);
printf("Enter third number (c): ");
scanf("%d", &c);
printf("\nBefore swapping:\n");
printf("a = %d, b = %d, c = %d\n", a, b, c);
temp = a;   
a = b;      
b = temp;  
printf("\nAfter swapping a and b:\n");
printf("a = %d, b = %d, c = %d\n", a, b, c);
return 0;
}