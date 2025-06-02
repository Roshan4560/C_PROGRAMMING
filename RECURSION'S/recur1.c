/* WAP to print sum of n natural number by the use of recursion */

# include<stdio.h>
// sum of n numners is //

int sum(int n);

int main(){
    printf("sum is %d\n", sum(10));
    return 0;
}

int sum (int n){
    if (n==1) {
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sum(n-1) + n;
    return sumN;
}