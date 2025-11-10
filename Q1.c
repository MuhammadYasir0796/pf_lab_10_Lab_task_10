#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char password[9]="12345678";
    char pass[9];
    char name[20];
    char username[20];
    printf("Enter password: ");
    scanf("%s",pass);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    if((strlen(pass))<8){
        printf("Invalid Password");
        return 0;
    }
    if(strcmp(password,pass)==0){
        printf("Authorized\n");
        printf("What is your name? ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';
    strcpy(username,name);
    }else{
        printf("Wrong PAssword");
    }
    return 0;
}