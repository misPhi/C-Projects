#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sum_squared_digits(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    return sum;
}

int main() {
    

    int number = 19;

    int slow = number;
    int fast = number;

    while (1) {
        slow = sum_squared_digits(slow);
printf("%d   ", slow);
        fast = sum_squared_digits(sum_squared_digits(fast));

printf("%d\n", fast);

if(slow == fast)
printf("\n");
    }

    if (fast == 1) {
        printf("CONGRATULATION, %d IS A HAPPY NUMBER!\n", number);
    } else {
        printf("SORRY, %d IS NOT A HAPPY NUMBER.\n", number);
    }

    return 0;
}