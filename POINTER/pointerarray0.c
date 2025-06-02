/* WAP to use the array in the pointer */

# include<stdio.h>

void printarray(int n, int *ptr);

int main(){
    int arr[]={1,2,5,4,74,47,8};
    printarray(7,arr);
    printf("the value of 4 element is %d\n", arr[3]);
    return 0;
}

void printarray(int n, int *ptr){
    for(int i=0; i<n; i++){
        printf("The value of the element %d is %d\n", i+1, *(ptr+i));
    }
    ptr[3]=5555;
}