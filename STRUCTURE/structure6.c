/* WAP to print the  student data by typedef structure */

# include<stdio.h>
# include<string.h>

typedef struct computerengineeringstudent {
    char name[50];
    int roll;
    float cgpa;
}coe;

int main(){
     coe s1;
    strcpy(s1.name,"Roshan");
    s1.roll = 34235;
    s1.cgpa = 777.8;


    printf("student name is %s\nstudent roll is %d\nstudent cgpa is %f\n", s1.name,s1.roll,s1.cgpa);

    return 0;
}