/* WAP to print the pattren e.x.=
           1
          12
         123
        1234   */
# include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        for(int k=1; k<=(5-i); k++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}