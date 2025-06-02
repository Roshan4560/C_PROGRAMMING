/* WAP to reverse the number by the use of pointer and array */

# include<stdio.h>

void reverseno(int *arr, int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    reverseno(arr, 9);
    for(int i=0; i<9; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

void reverseno(int *arr, int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}