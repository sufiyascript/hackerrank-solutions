#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* organizingContainers(int container_rows, int container_columns, int** container)
{
    int rowSum[100] = {0};
    int colSum[100] = {0};

    // Calculate total balls in each container
    for (int i = 0; i < container_rows; i++)
    {
        for (int j = 0; j < container_columns; j++)
        {
            rowSum[i] += container[i][j];
            colSum[j] += container[i][j];
        }
    }

    // Check if every container can hold one type of ball
    for (int i = 0; i < container_rows; i++)
    {
        int found = 0;

        for (int j = i; j < container_columns; j++)
        {
            if (rowSum[i] == colSum[j])
            {
                int temp = colSum[i];
                colSum[i] = colSum[j];
                colSum[j] = temp;

                found = 1;
                break;
            }
        }

        if (!found)
        {
            return "Impossible";
        }
    }

    return "Possible";
}

int main()
{
    int q;
    scanf("%d", &q);

    while (q--)
    {
        int n;
        scanf("%d", &n);

        int** container = malloc(n * sizeof(int*));

        for (int i = 0; i < n; i++)
        {
            container[i] = malloc(n * sizeof(int));

            for (int j = 0; j < n; j++)
            {
                scanf("%d", &container[i][j]);
            }
        }

        char* result = organizingContainers(n, n, container);

        printf("%s\n", result);

        for (int i = 0; i < n; i++)
        {
            free(container[i]);
        }

        free(container);
    }

    return 0;
}
