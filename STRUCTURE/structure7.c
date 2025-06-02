/* WAP to enter address (house no., block, city,state) of 5 people */

# include<stdio.h>
# include<string.h>

struct address{
    int housenumber;
    int block;
    char city[50];
    char state[50];
};

int main(){
    struct address p1 = {123,1, "karolbagh", "Delhi"};
    struct address p2 = {234, 2, "Noida", "U.P."};
    struct address p3 = {42, 4, "Patna", "Bihar"};
    struct address p4 = {87, 5, "Mumbai", "Maharastra"};
    struct address p5 = {876, 3, "Chenni", "Tamil Nadu"};

    printf("housenumber is %d\tblock is %d\tcity is %s\tstate is %s\n", p1.housenumber,p1.block,p1.city,p1.state);
    printf("housenumber is %d\tblock is %d\tcity is %s\t  state is %s\n", p2.housenumber,p2.block,p2.city,p2.state);
    printf("housenumber is %d\tblock is %d\tcity is %s\t  state is %s\n", p3.housenumber,p3.block,p3.city,p3.state);
    printf("housenumber is %d\tblock is %d\tcity is %s\t  state is %s\n", p4.housenumber,p4.block,p4.city,p4.state);
    printf("housenumber is %d\tblock is %d\tcity is %s\t  state is %s\n", p5.housenumber,p5.block,p5.city,p5.state);

return 0;
}