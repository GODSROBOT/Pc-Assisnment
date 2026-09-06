#include <stdio.h>
int main()
{
    int item1 = 6, item2 = 20, item3 = 25;
    printf("Item 1: %d\n", item1);
    printf("Item 2: %d\n", item2);
    printf("Item 3: %d\n", item3);
    if (item1 > 5)
    {
        printf("Item 1 is greater than 5\n");
    }
    else
    {
        printf("Item 1 is not greater than 5\n");
    }
    if (item2 > 15)
    {
        printf("Item 2 is greater than 15\n");
    }
    else
    {
        printf("Item 2 is not greater than 15\n");
    }
    if (item3 > 30)
    {
        printf("Item 3 is greater than 30\n");
    }
    else
    {
        printf("Item 3 is not greater than 30\n");
    }
    return 0;
}