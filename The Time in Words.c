#include <stdio.h>

char *num[] = {
    "zero", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine", "ten", "eleven",
    "twelve", "thirteen", "fourteen", "fifteen",
    "sixteen", "seventeen", "eighteen", "nineteen",
    "twenty", "twenty one", "twenty two", "twenty three",
    "twenty four", "twenty five", "twenty six",
    "twenty seven", "twenty eight", "twenty nine"
};

int main() {
    int h, m;
    scanf("%d", &h);
    scanf("%d", &m);

    if (m == 0) {
        printf("%s o' clock", num[h]);
    }
    else if (m == 15) {
        printf("quarter past %s", num[h]);
    }
    else if (m == 30) {
        printf("half past %s", num[h]);
    }
    else if (m == 45) {
        printf("quarter to %s", num[h + 1]);
    }
    else if (m < 30) {
        if (m == 1)
            printf("one minute past %s", num[h]);
        else
            printf("%s minutes past %s", num[m], num[h]);
    }
    else {
        int remaining = 60 - m;

        if (remaining == 1)
            printf("one minute to %s", num[h + 1]);
        else
            printf("%s minutes to %s", num[remaining], num[h + 1]);
    }

    return 0;
}
