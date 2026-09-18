#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* appendAndDelete(char* s, char* t, int k)
{
    int i = 0;

    // Find common prefix
    while (s[i] != '\0' && t[i] != '\0' && s[i] == t[i])
    {
        i++;
    }

    // Minimum operations required
    int operations = (strlen(s) - i) + (strlen(t) - i);

    // Check if exactly k operations are possible
    if (operations <= k &&
        ((k - operations) % 2 == 0 ||
         k >= strlen(s) + strlen(t)))
    {
        return "Yes";
    }

    return "No";
}

int main()
{
    char s[101];
    char t[101];
    int k;

    scanf("%s", s);
    scanf("%s", t);
    scanf("%d", &k);

    char* result = appendAndDelete(s, t, k);

    printf("%s\n", result);

    return 0;
}
