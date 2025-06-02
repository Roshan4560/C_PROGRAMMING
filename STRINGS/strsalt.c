/* Find the salted form of a password entered by user if the salt 
    is "1234" & added at the end */

# include<stdio.h>
# include<conio.h>
# include<string.h>

int password();

int main(){
    password();
    return 0;
}

int password(){
    char pass[200];
    printf("Enter the password\n");
    scanf("%s", &pass);

    char salt[50]="1234";

    char newpass;
    printf("%s\n", strcat(pass,salt));
    return 0;
}