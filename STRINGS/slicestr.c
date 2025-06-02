/* Write the named slice,which take a string & returns a sliced
      from index n to m*/

# include<stdio.h>
# include<string.h>

int slice(int n,int m, char str[]);

int main(){
    char str[]="HelloWorld";
    slice(3,6,str);
    return 0;
}

int slice(int n,int m, char str[]){
    char newstr[200];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}