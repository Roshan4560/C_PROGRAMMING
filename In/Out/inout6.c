/* WAP to write all the numbers from 1 to n in a file */

# include<stdio.h>

int main(){
FILE *fptr;
fptr =  fopen("num.txt", "w");

int n;
printf("Enter the number:\n");
scanf("%d",&n);
for(int i=0; i<=n; i++){
    fprintf(fptr,"%d\n", i);
}

fclose(fptr);
return 0;
}