#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i+5; //10
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);

    i +=2; // Same as i= i + 2;
    printf("The value of i is %d\n", i);

    // i++ prints i first an then increments  i (Post increment Operator)
    // ++i increments i first and then prints i (Post increment Operator)


    return 0;
}