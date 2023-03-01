#include <stdio.h>

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);

    int before = 0;
    int after = 0;

    if (n > 1 && n < 3)
    {
        if (p == 1)
        {
            before = 3;
            after = 2;
        }
        else if (p == 2)
        {
            before = 2;
            after = 3;
        }
    }
    else
    {
        if (p == 1)
        {
            before = 3;
            after = 2;
        }
        else if (p == 2)
        {
            before = 1;
            after = 3;
        }
        else if (p == 3)
        {
            before = 2;
            after = 1;
        }
    }

    printf("%d %d\n", before, after);
    return 0;
}
