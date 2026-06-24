#include <stdio.h>

int main()
{
    int number, i;
    int is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 2; i < number; i++)
        if (number % i == 0)
        {
            is_prime = 0;
            break;
        }
    if (is_prime == 1)
    {
        printf("The number %d is prime\n", number);
    }
    else
    {
        printf("The number %d is not prime\n", number);
    }
    return 0;
}