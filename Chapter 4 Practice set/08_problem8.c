#include <stdio.h>

int main(){
    int product = 1;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial of the given value is %d", product);
    return 0;
}