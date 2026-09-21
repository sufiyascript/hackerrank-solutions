#include <stdio.h>
#include <stdlib.h>

int* cutTheSticks(int arr_count, int* arr, int* result_count)
{
    int *result = malloc(arr_count * sizeof(int));
    int count = 0;

    while (1)
    {
        int min = 1001;
        int sticks = 0;

        // Find smallest stick
        for (int i = 0; i < arr_count; i++)
        {
            if (arr[i] > 0 && arr[i] < min)
            {
                min = arr[i];
            }
        }

        // No sticks left
        if (min == 1001)
        {
            break;
        }

        // Count and cut sticks
        for (int i = 0; i < arr_count; i++)
        {
            if (arr[i] > 0)
            {
                sticks++;
                arr[i] = arr[i] - min;
            }
        }

        result[count] = sticks;
        count++;
    }

    *result_count = count;
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result_count;
    int *result = cutTheSticks(n, arr, &result_count);

    for (int i = 0; i < result_count; i++)
    {
        printf("%d\n", result[i]);
    }

    free(arr);
    free(result);

    return 0;
}
