/* WAP to allocate memory to store 5 prices */

# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof (int));

    ptr[0] =1;
    ptr[2] =6;
    ptr[4] =9;
    
    for(int i=0; i<5; i++){
    printf("%d\n", ptr[i]);
    }

    return 0;
}