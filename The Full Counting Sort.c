
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    char **str = malloc(n * sizeof(char *));
    char **result = malloc(n * sizeof(char *));

    int count[100] = {0};
    int pos[100];

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(int));
        str[i] = malloc(11 * sizeof(char));

        scanf("%d %10s", &arr[i], str[i]);

        if (i < n / 2)
        {
            strcpy(str[i], "-");
        }

        count[arr[i]]++;
    }

    pos[0] = 0;

    for (int i = 1; i < 100; i++)
    {
        pos[i] = pos[i - 1] + count[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        int index = pos[arr[i]]++;
        result[index] = str[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s", result[i]);

        if (i < n - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
