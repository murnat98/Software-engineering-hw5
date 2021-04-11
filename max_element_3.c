#include <stdio.h>

int main()
{
    int n = 0;
    int array[100] = {};

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    int max_element = 0; // max element of the `array`

    // TODO: Count max element here

    printf("%d\n", max_element);

    return 0;
}
