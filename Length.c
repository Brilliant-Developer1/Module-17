#include <stdio.h>

int len(char array[], int i)
{
    if (array[i] == '\0')
    {
        return 0;
    }
    int l = len(array, i + 1);
    return l + 1;
}
int main()
{
    int input;
    scanf("%d", &input);

    char array[input];
    scanf("%s", array);

    int ans = len(array, 0);

    printf("%d", ans);

    return 0;
}