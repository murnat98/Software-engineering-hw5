#include <stdio.h>

int main()
{
    int n = 0;
    int array[101] = {};

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    int insert_number = 0; // insert this number to the `array`
    int insert_index = 0; // index, where to insert `insert_number`

    scanf("%d", &insert_number);
    scanf("%d", &insert_index);

    // TODO: insert the `insert_number` to the `insert_index`-th position in the `array` HERE

    // |                          |
    // | print the modified array |
    // v                          v
    for (int i = 0; i < n + 1; ++i)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
