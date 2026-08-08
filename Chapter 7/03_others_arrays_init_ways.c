#include <stdio.h>

int main(){
    int cgpa[3] = {9,8,8};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }

    int marks[] = {9,8,8}; //We can also write like that.   
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, marks[i]);
    }
    
    return 0;
}