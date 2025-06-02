/* WAP to input the student information from the user and enter it to a file */

# include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[50];
    int rollno;
    float cgpa;

    printf("Enter the name:\n");
    scanf("%s", name);
    printf("Enter the rollno\n");
    scanf("%d", &rollno);
    printf("Enter the cgpa\n");
    scanf("%f", &cgpa);


    fprintf(fptr,"Name = %s\n", name);
    fprintf(fptr,"Rollno = %d\n", rollno);
    fprintf(fptr,"cgpa = %f\n", cgpa);

    fclose(fptr);
    return 0;

}