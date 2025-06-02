/* WAP to open and close the file */

# include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    if(fptr==NULL) {
        printf("file doesnot exist\n");
    }
    else{
        printf("File exists\n");
    fclose(fptr);
    }

    return 0;
}