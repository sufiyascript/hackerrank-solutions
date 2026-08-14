#include <stdio.h>

char* kangaroo(int x1, int v1, int x2, int v2)
{
    static char yes[] = "YES";
    static char no[] = "NO";

    // Agar dono same speed se jump kar rahe hain
    if (v1 == v2)
    {
        if (x1 == x2)
            return yes;
        else
            return no;
    }

    // Agar first kangaroo peeche hai
    // aur uski speed second se zyada hai
    if (x1 < x2 && v1 > v2)
        return yes;

    // Agar first kangaroo aage hai
    // aur uski speed second se zyada hai
    if (x1 > x2 && v1 < v2)
        return yes;

    return no;
}

int main()
{
    int x1, v1, x2, v2;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    printf("%s\n", kangaroo(x1, v1, x2, v2));

    return 0;
}
