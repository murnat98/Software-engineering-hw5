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

    int product = 0; // product of all elements in the `array`.

    // TODO: count the product of all the elements in the `array` from 0-th to n-th element.

    printf("%d\n", product); // print the product

    return 0;
}
