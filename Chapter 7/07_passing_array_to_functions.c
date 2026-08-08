// ITS NOT WRITTEN BY HARRY IT'S WRITTEN BY ME
#include <stdio.h>

void printArray(int i[], int n);   // function prototype

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printArray(arr, n);   // function call

    return 0;
}

void printArray(int i[], int n)
{
    printf("The size of array is %d\n", n);

    for(int x = 0; x < n; x++)
    {
        printf("%d ", i[x]);
    }
}