#include <stdio.h>
#include <stdlib.h>

int queensAttack(int n, int k, int r_q, int c_q, int obstacles_rows, int obstacles_columns, int** obstacles)
{
    int up = n - r_q;
    int down = r_q - 1;
    int right = n - c_q;
    int left = c_q - 1;

    int upRight = (up < right) ? up : right;
    int upLeft = (up < left) ? up : left;
    int downRight = (down < right) ? down : right;
    int downLeft = (down < left) ? down : left;

    for (int i = 0; i < k; i++)
    {
        int r = obstacles[i][0];
        int c = obstacles[i][1];

        /* Same column */
        if (c == c_q)
        {
            if (r > r_q)
            {
                int d = r - r_q - 1;
                if (d < up)
                    up = d;
            }
            else
            {
                int d = r_q - r - 1;
                if (d < down)
                    down = d;
            }
        }

        /* Same row */
        else if (r == r_q)
        {
            if (c > c_q)
            {
                int d = c - c_q - 1;
                if (d < right)
                    right = d;
            }
            else
            {
                int d = c_q - c - 1;
                if (d < left)
                    left = d;
            }
        }

        /* Diagonal */
        else
        {
            int dr = r - r_q;
            int dc = c - c_q;

            if (dr == dc)
            {
                if (dr > 0)
                {
                    if (dr - 1 < upRight)
                        upRight = dr - 1;
                }
                else
                {
                    if (-dr - 1 < downLeft)
                        downLeft = -dr - 1;
                }
            }
            else if (dr == -dc)
            {
                if (dr > 0)
                {
                    if (dr - 1 < upLeft)
                        upLeft = dr - 1;
                }
                else
                {
                    if (-dr - 1 < downRight)
                        downRight = -dr - 1;
                }
            }
        }
    }

    return up + down + left + right
           + upRight + upLeft + downRight + downLeft;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int r_q, c_q;
    scanf("%d %d", &r_q, &c_q);

    int **obstacles = NULL;

    if (k > 0)
    {
        obstacles = malloc(k * sizeof(int *));

        for (int i = 0; i < k; i++)
        {
            obstacles[i] = malloc(2 * sizeof(int));

            scanf("%d %d", &obstacles[i][0], &obstacles[i][1]);
        }
    }

    int result = queensAttack(n, k, r_q, c_q, k, 2, obstacles);

    printf("%d\n", result);

    for (int i = 0; i < k; i++)
    {
        free(obstacles[i]);
    }

    free(obstacles);

    return 0;
}
