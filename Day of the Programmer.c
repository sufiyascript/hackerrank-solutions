#include <stdio.h>

char* dayOfProgrammer(int year) {
    static char date[20];

    // Special transition year
    if (year == 1918) {
        sprintf(date, "26.09.%d", year);
    }
    // Julian calendar
    else if (year < 1918) {
        if (year % 4 == 0)
            sprintf(date, "12.09.%d", year);
        else
            sprintf(date, "13.09.%d", year);
    }
    // Gregorian calendar
    else {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            sprintf(date, "12.09.%d", year);
        else
            sprintf(date, "13.09.%d", year);
    }

    return date;
}

int main() {
    int year;
    scanf("%d", &year);

    printf("%s\n", dayOfProgrammer(year));

    return 0;
}
