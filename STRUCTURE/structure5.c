/* WAP to print the student by the use of function structure */

# include<stdio.h>
# include<string.h>

struct student{
    char name[50];
    int  roll;
    float cgpa;
};

void info(struct student s1);

int main(){
    struct student s1 = {"Roshan",2372, 23.8};
    info(s1);

    return 0;
}


void info(struct student s1){

    printf("name = %s\n roll = %d\n cgpa = %f", s1.name, s1.roll, s1.cgpa);
}