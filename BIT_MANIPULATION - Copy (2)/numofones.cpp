/* WAP to count the number of ones in binary representation 
     of a number */

#include<iostream>
using namespace std;

int numofones(int n){
    int count=0;
    while(n){
       n= n & (n-1);
       count++;
    }

    return count;
}

int main(){

    cout<<numofones(19);
    
    return 0;
}