#include <stdio.h>

void array_recursion(int array[], int input, int i)
{

    if (i == input)
    {
        return;
    }
    printf("%d\n", array[i]);
    array_recursion(array, input, i + 1);
}
int main()
{
    int input;
    scanf("%d", &input);

    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }

    array_recursion(array, input, 0);

    return 0;
}