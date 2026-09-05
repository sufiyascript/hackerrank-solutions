#include <stdio.h>

int reverseNumber(int n)
{
    int rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int beautifulDays(int i, int j, int k)
{
    int count = 0;

    for (int day = i; day <= j; day++)
    {
        int reverse = reverseNumber(day);
        int difference = day - reverse;

        if (difference < 0)
        {
            difference = -difference;
        }

        if (difference % k == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int i, j, k;

    scanf("%d %d %d", &i, &j, &k);

    printf("%d\n", beautifulDays(i, j, k));

    return 0;
}
