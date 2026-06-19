#include <stdio.h>5

int main(){
    int n;
    printf("The table for the given number is \n");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }
    
    return 0;
}