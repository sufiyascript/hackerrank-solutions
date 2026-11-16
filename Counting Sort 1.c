#include <stdio.h>
int main()
{
    int n, i;
    int arr[1000000];
    int freq[100] = {0};

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for(i = 0; i < 100; i++)
    {
        printf("%d ", freq[i]);
    }

    return 0;
}
