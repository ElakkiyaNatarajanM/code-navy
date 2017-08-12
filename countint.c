#include <stdio.h>
int main()
{
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    while(n != 0)
    {
        // n = num/10
        num /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
