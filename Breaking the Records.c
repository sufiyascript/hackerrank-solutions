#include <stdio.h>
#include <stdlib.h>

int* breakingRecords(int scores_count, int* scores, int* result_count)
{
    int maxScore = scores[0];
    int minScore = scores[0];

    int maxCount = 0;
    int minCount = 0;

    for (int i = 1; i < scores_count; i++)
    {
        if (scores[i] > maxScore)
        {
            maxScore = scores[i];
            maxCount++;
        }
        else if (scores[i] < minScore)
        {
            minScore = scores[i];
            minCount++;
        }
    }

    int* result = malloc(2 * sizeof(int));

    result[0] = maxCount;
    result[1] = minCount;

    *result_count = 2;

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    int* scores = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    int result_count;

    int* result = breakingRecords(n, scores, &result_count);

    for (int i = 0; i < result_count; i++)
    {
        printf("%d", result[i]);

        if (i < result_count - 1)
            printf(" ");
    }

    printf("\n");

    free(scores);
    free(result);

    return 0;
}
