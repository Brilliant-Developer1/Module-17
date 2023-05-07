#include <stdio.h>

void recursion(int i)
{

    printf("%d\n", i);

    if (i == 5)
    {
        return;
    }
    recursion(i + 1);
}
int main()
{
    recursion(1);

    return 0;
}