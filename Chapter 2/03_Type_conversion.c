#include <stdio.h>

int main(){
    float a=9.0;
    float b=2.0;
    float c = a/b;
    int d=6.5; //If we don't write here float then there will be demotion because it a integer and our constant is float
    printf("The value of a when divisible by b is %f\n",c);
    printf("The value of d is %f",d);
    
    return 0;
}