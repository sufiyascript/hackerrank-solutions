
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    const char *s1 = *(const char **)a;
    const char *s2 = *(const char **)b;

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 < len2)
        return -1;
    if (len1 > len2)
        return 1;

    return strcmp(s1, s2);
}

int main()
{
    int n;
    scanf("%d", &n);

    char **arr = malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(1001 * sizeof(char));
        scanf("%1000s", arr[i]);
    }

    qsort(arr, n, sizeof(char *), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }

    free(arr);

    return 0;
}
