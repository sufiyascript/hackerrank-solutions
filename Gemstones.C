
#include <stdio.h>
#include <string.h>

int gemstones(int arr_count, char** arr) {
    int count[26] = {0};

    for (int i = 0; i < arr_count; i++) {
        int visited[26] = {0};

        for (int j = 0; arr[i][j] != '\0'; j++) {
            visited[arr[i][j] - 'a'] = 1;
        }

        for (int j = 0; j < 26; j++) {
            if (visited[j] == 1) {
                count[j]++;
            }
        }
    }

    int result = 0;

    for (int i = 0; i < 26; i++) {
        if (count[i] == arr_count) {
            result++;
        }
    }

    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    char arr[100][101];
    char *ptr[100];

    for (int i = 0; i < n; i++) {
        scanf("%100s", arr[i]);
        ptr[i] = arr[i];
    }

    printf("%d\n", gemstones(n, ptr));

    return 0;
}
