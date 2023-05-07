#include <stdio.h>

void recursion(int i)
{
    if (i == 6)
    {
        return;
    }
    recursion(i + 1);
    printf("%d\n", i);
}
int main()
{
    recursion(1);

    return 0;
}