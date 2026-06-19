#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("The value you entered is 1\n");
        break;

    case 2:
        printf("The value you entered is 2\n");
        break;

    case 3:
        printf("The value you entered is 3\n");
        break;
    case 4:
        printf("The value you entered is 4\n");
        break;

    default:
        printf("Nothing is matched");
    }

    return 0;
}