#include <stdio.h>
int main() {
    int num = 10;
    printf("Initial value of num: %d\n", num);
    num += 5;  
    printf("After += 5, num = %d\n", num);
    num -= 1;  
    printf("After -= 1, num = %d\n", num);
    num *= 2; 
    printf("After *= 2, num = %d\n", num);
    num /= 4;  
    printf("After /= 4, num = %d\n", num);
    return 0;
}
