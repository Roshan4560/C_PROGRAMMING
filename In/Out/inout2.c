/* WAP to read the file */

# include<stdio.h>

int main(){
 FILE *fptr;
 fptr = fopen("Test.txt", "r");

 char ch;
 fscanf(fptr, "%c", &ch);
 printf("chracter = %c\n",ch);
 fscanf(fptr, "%c", &ch);
 printf("chracter = %c\n",ch);
 fscanf(fptr, "%c", &ch);
 printf("chracter = %c\n",ch);
 fscanf(fptr, "%c", &ch);
 printf("chracter = %c\n",ch);
 fscanf(fptr, "%c", &ch);
 printf("chracter = %c\n",ch);
 fclose(fptr);
 return 0;   
}