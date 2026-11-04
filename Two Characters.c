#include <stdio.h>
#include <string.h>

int alternate(char s[]) {
    int max = 0;
    int len = strlen(s);

    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = a + 1; b <= 'z'; b++) {

            char temp[1001];
            int k = 0;
            int valid = 1;

            for (int i = 0; i < len; i++) {
                if (s[i] == a || s[i] == b) {
                    temp[k++] = s[i];
                }
            }

            for (int i = 1; i < k; i++) {
                if (temp[i] == temp[i - 1]) {
                    valid = 0;
                    break;
                }
            }

            if (valid && k > max) {
                max = k;
            }
        }
    }

    return max;
}

int main() {
    int n;
    char s[1001];

    scanf("%d", &n);
    scanf("%s", s);

    printf("%d\n", alternate(s));

    return 0;
}
