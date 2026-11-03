
#include <stdio.h>
#include <string.h>

int minimumNumber(int n, char *password) {
    int digit = 0, lower = 0, upper = 0, special = 0;

    char special_chars[] = "!@#$%^&*()-+";

    for (int i = 0; i < n; i++) {
        if (password[i] >= '0' && password[i] <= '9')
            digit = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            upper = 1;
        else if (strchr(special_chars, password[i]) != NULL)
            special = 1;
    }

    int missing = 4 - (digit + lower + upper + special);
    int length_needed = 6 - n;

    return (missing > length_needed) ? missing : length_needed;
}

int main() {
    int n;
    char password[101];

    scanf("%d", &n);
    scanf("%100s", password);

    printf("%d\n", minimumNumber(n, password));

    return 0;
}
