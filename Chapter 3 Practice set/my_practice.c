#include <stdio.h>

int main(){
    /*When there is nested if ladder then all the instructions are get printed,
    But when there is else if ladder get used then there will be only one instruction get printed. */
    int a=30;
    if(a>5){
        printf("The a is greater than 5\n");
    }
    if(a<20){
        printf("The a is lesser than 20\n");
    }
    else{
        printf("The value is not equal to anything");
    }
    return 0;
}