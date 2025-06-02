/* WAP to write in a file */

# include<stdio.h>

int main(){
    FILE  *fptr;
    fptr = fopen("Test.txt", "a");

    fprintf(fptr,"%c", 'm');
    fprintf(fptr,"%c", 'a');
    fprintf(fptr,"%c", 'n');
    fprintf(fptr,"%c", 'g');
    fprintf(fptr,"%c", 'o');

    return 0;
}