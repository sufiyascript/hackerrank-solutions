#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)

{
    // Step 1: find largest i such that s[i] < s[i+1]
    int i = n - 2;
    while (i >= 0 && strcmp(s[i], s[i + 1]) >= 0)
        i--;

    // If no such index exists, this is the last permutation
    if (i < 0)
        return 0;

    // Step 2: find largest j > i such that s[j] > s[i]
    int j = n - 1;
    while (strcmp(s[j], s[i]) <= 0)
        j--;

    // Step 3: swap s[i] and s[j]
    char *temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    // Step 4: reverse suffix from i+1 to n-1
    int left = i + 1, right = n - 1;
    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }

    return 1;
}


int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
