#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int)); // dynamic array

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    free(arr);
    return 0;
}
