#include <stdio.h>

int main(){
    int income;
    float tax=0;
    printf("Enter income: \n");
    scanf("%d", &income);
    if(income<200000){
        tax=0;
    }
    else if(income>250000 && income<500000){
        tax= 0.05* (income - 250000);
    }
    else if(income>500000 && income<=1000000){
        tax = 0.05 * ( 500000 - 250000) + 0.2 * (income- 50000);
    }
    else{
        tax= 0.05* (500000 - 250000) + (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.2f", tax); //You can also make variations in your library functions like example %.2f.
    
    return 0;
}