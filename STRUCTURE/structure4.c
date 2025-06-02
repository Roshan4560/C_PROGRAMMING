/* WAP to print the student data by use of pointer structure */

# include<stdio.h>
# include<string.h>

struct student{
    char name[50];
    int roll; 
    float cgpa;
};

    int main(){
    struct student s1;
    printf("Enter the name of s1\n:");
    scanf("%s", s1.name);
    printf("Enter the roll of s1\n:");
    scanf("%d",& s1.roll); 
    printf("Enter the cgpa of s1\n:");
    scanf("%f", &s1.cgpa);

    printf("\n\n");

    printf("name = %s\n roll = %d\n cgpa = %f\n", s1.name, s1.roll,s1.cgpa);

    struct student *ptr=&s1;
    printf("roll = %d", (*ptr).roll); //(*ptr).roll = ptr->roll

    return 0;
    }
