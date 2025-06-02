/* WAP to use a poitner */

# include<stdio.h>

void summm(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg = (float)(*sum)/2;
}

int main(){
    int x,y,sum;
    float avg;
    x=3;
    y=9;
    summm(x,y,&sum,&avg);
    printf("sum is %d\n", sum);
    printf("avg is %f\n", avg);
    return 0;
}