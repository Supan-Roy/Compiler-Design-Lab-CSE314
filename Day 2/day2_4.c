// C program to Tokenize a String (without Library Func.)
#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("Tokens are: \n");

    for(int i=0; s[i]!='\0';i++){
        if(s[i]==' '){
            while(s[i+1]==' '){
                i++;
            }
            printf("\n");
        }
        else {
            printf("%c", s[i]);
        }
    }

    return 0;
}