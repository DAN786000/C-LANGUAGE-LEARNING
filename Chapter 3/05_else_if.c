#include <stdio.h>

int main(){
    int age=65;
    
    if(age>66){
        printf("Your age is above 40 you can drive");
    }

    else if(age>70){
        printf("Your age is above 60 you are elder");
    }

    else if (age>80){
        printf("Drive as much as you want");
    }

    else{
        printf("You can't drive because you are a teenager now");
    }

    return 0;
}