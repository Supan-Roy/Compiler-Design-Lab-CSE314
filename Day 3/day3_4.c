// C program to recognize set of identifiers valid or not
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[1000];
    printf("Enter an identifier: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int id=1;

    // check first character: must be letter or underscore  
    if(!isalpha(s[0]) && s[0]!='_'){
        id=0;
    }
    // check remaining characters: must be letter, digit, or underscore
    for(int i=1;i<strlen(s);i++){
        if(!(isalnum(s[i]) || s[i]=='_')){
            id=0;
            break;
        }
    }
    if(id){
        printf("Valid Identifier\n");
    } else {
        printf("Invalid Identifier\n");
    }
}
