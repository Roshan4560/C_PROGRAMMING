/* WAP to find the sequences sum e.g.  1-2+3-4+5-6.........  */

# include <stdio.h>
int main(){
    int n,sum1=0,sum2=0,sum;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i=i+1){
        if(i%2==0){
            sum2=sum2+i;
        }
        else{
            sum1=sum1+i;
        }
    }
    sum=sum1 - sum2;
    printf("Sum is: %d\n", sum);
    return 0;
}