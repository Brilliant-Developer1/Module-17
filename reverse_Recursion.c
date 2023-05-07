#include <stdio.h>

void recursion(int i)
{

    printf("%d\n", i);

    if (i == 1)
    {
        return;
    }
    recursion(i - 1);
}
int main()
{
    recursion(5);

    return 0;
}