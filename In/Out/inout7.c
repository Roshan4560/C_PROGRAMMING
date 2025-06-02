/* WAP to enter 2 numbers- a&b, are written in a file.
    write a program to replace them with their sum */

# include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int a,b;
    printf("Enter the a:\n");
    scanf("%d", &a);
    printf("Enter the b:\n");
    scanf("%d", &b);

    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr,"sum of a and b is %d\n", a+b);

    fclose(fptr);
    return 0;
}