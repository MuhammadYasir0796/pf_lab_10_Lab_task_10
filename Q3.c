#include <stdio.h>

int main(){
    FILE *ptr;

    ptr=fopen("text.txt","w");
    fprintf(ptr,"Just wrote into file!\n");
    fclose(ptr);
    
    ptr=fopen("text.txt","r");
    int ch;
    while((ch=fgetc(ptr)) != EOF){
        printf("%c",ch);
    }
    fclose(ptr);

    ptr=fopen("text.txt","a");
        fprintf(ptr,"Yoo How are you!\nAppended to it\n");
    fclose(ptr);
    int ch1;
    ptr=fopen("text.txt","r");
    while((ch1=fgetc(ptr)) != EOF){
        printf("%c",ch1);
    }
    fclose(ptr);
    return 0;
}