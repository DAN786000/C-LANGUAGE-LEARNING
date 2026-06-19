#include <stdio.h>

int main(){
        int age = 5;
         /*When there is nested if ladder then all the instructions are get printed,
    But when there is else if ladder get used then there will be only one instruction get printed. */

    if(age>10){
        printf("We are inside if\n");
        printf("The age is greater than 10\n");
    }
    else{
        printf("Your age is not greater than 10");
    }

        return 0;
}