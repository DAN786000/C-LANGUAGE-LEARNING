#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("harry.txt", "a"); // mode append don't remove the data.
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}