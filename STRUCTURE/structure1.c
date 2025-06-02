/* WAP to print the student details by the use of structure */

# include<stdio.h>
# include<string.h>

struct student{
int roll;
float cgpa;
char name[50];
};

int main(){
    struct student s1;
    s1.roll=1213;
    s1.cgpa=8.7;
   // s1.name="Roshan";//
    strcpy(s1.name, "Roshan");

    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("student name = %s\n", s1.name);

    return 0;
}