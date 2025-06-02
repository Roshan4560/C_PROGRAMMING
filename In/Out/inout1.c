/* WAP to create and write the file */

# include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("newTest.txt", "w");
    if(fptr==NULL) {
        printf("file doesnot exist\n");
    }
    else{
        printf("File exists\n");
    fclose(fptr);
    }

    return 0;
}