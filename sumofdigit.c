#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int sum = 0;
    int last_digit;

    while (n != 0)
    {
        last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }

    printf("\nThe sum of digits is %d", sum);

    return 0;
}