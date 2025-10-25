// C program to remove special characters and print
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='\n' || s[i]=='\t'){
            continue;
        }
        else if(isalnum(s[i]) || s[i]==' ' || s[i]=='.' || s[i]==',' || s[i]==';' || s[i]==':' || s[i]=='?' || s[i]=='!'){
            putchar(s[i]);
        }
    }
    return 0;
}
