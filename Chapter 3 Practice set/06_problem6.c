#include <stdio.h>

int main(){
    int a=10, b=20, c=30, d=40;
    if(a>=b || a<=b){
        printf("The greater value is %d");
    }
    else if(b>=c || c<=b){
        printf("The greater value is %d");
    }
    else if(c>=d || d<=c){
        printf("The greater value is %d");
    }
    else{
        printf("NO value is greater");
    }

    return 0;
}