// C program to count and show the maximum frequency of a word in a string
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[1000];
    char w[1000];
    int count=0;
    gets(s);
    gets(w);

    char *token = strtok(s, " ");
    while(token!=NULL){
        if(strcmp(token, w)==0){
            count++;
        }
        token = strtok(NULL, " ");
    }
    
    printf("The word \"%s\" appears %d times\n", w, count);
    return 0;
}
