#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != "SOS"[i % 3])
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
