#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    char topics[n][m + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", topics[i]);
    }

    int maxTopics = 0;
    int teams = 0;

    // Check every possible pair of people
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int count = 0;

            // Check each topic
            for (int k = 0; k < m; k++)
            {
                if (topics[i][k] == '1' || topics[j][k] == '1')
                {
                    count++;
                }
            }

            // Found a new maximum
            if (count > maxTopics)
            {
                maxTopics = count;
                teams = 1;
            }
            // Another team has the same maximum
            else if (count == maxTopics)
            {
                teams++;
            }
        }
    }

    printf("%d\n", maxTopics);
    printf("%d\n", teams);

    return 0;
}
