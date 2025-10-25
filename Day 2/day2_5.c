// C program to Tokenize a String (with Library Func.)
#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("Tokens are: \n");

    char *token = strtok(s, " ");
    while(token!=NULL){
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}