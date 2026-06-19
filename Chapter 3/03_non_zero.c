#include <stdio.h>

int main(){
    if(1){
        printf("This if is execulted\n");
    }

    if(4.5){
        printf("This if is also executed\n");        
    }

    if('c'){
        printf("The character inside if is also executed\n");

    } 

    if(0){
        printf("The if is not executed\n");
    }
    return 0;
}