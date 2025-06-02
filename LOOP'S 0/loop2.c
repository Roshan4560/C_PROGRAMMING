/* WAP to print the CapitalAlphabet and SmallerAlphabet by the use of for loop */
# include<stdio.h>
int main(){
    printf("Capital Alphabet Letter (AtoZ)\n");
    for(char i='A'; i<='Z'; i++) {
        printf("%c\n", i);
    }


    printf("Small Alphabet Letter (atoz)\n");
    for(char i='a'; i<='z'; i++) {
        printf("%c\n", i);
    }
    return 0;
}