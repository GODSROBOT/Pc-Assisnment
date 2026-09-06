#include <stdio.h>

int main()
{
    int first, second, third;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &first, &second, &third);

    if (first >= second && first >= third) {
        printf("The largest number is %d\n", first);
    } else if (second >= first && second >= third) {
        printf("The largest number is %d\n", second);
    } else {
        printf("The largest number is %d\n", third);
    }

    return 0;
}