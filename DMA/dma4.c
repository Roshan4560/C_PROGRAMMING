/* WAP to use re-alloc */

# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)calloc(5, sizeof(int));

    printf("Enter the 5 numbers\t");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);

    ptr = (int*)calloc(8,sizeof(int));

    printf("Enter the 8 numbers:");
    for(int i=0; i<8; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<8; i++){
        printf("Number %d is %d\n",i,ptr[i]);
    }
    return 0;
}