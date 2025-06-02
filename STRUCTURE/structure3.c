/* WAP to print the three student data in a simple way by 
               the use of structure */

# include<stdio.h>
# include<string.h>

struct student{
char name[20];
int roll;
float cgpa;
};

int main(){
    struct student s1 = {"Roshan", 13787, 8.8};
    struct student s2 = { "raj", 23543, 7.7};
    struct student s3 = { "jay", 20213, 6.78};

    printf("name = %s\n roll = %d\n cgpa = %f\n", s1.name, s1.roll,s1.cgpa);
    printf("\n");
    printf("name = %s\n roll = %d\n cgpa = %f\n", s2.name, s2.roll,s2.cgpa);
    printf("\n");
    printf("name = %s\n roll = %d\n cgpa = %f\n", s3.name, s3.roll,s3.cgpa);

    return 0;
}