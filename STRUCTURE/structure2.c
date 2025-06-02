/* WAP to print the different student by the use of structure */

# include<stdio.h>
# include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[50];
};

int main(){
struct student it[10];
it[0].roll= 27754;
it[0].cgpa= 8.7;
strcpy(it[0].name, "Roshan");

printf("name = %s\n", it[0].name);
printf("cgpa= %f\n", it[0].cgpa);
printf("roll = %d", it[0].roll);

printf("\n\n");

struct student coe[10];
coe[0].roll= 37754;
coe[0].cgpa= 9.7;
strcpy(coe[0].name, "Rohan");

printf("name = %s\n", coe[0].name);
printf("cgpa= %f\n", coe[0].cgpa);
printf("roll = %d\n", coe[0].roll);

return 0;
}