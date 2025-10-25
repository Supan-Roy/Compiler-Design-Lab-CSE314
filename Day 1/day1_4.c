// C program to recognize strings under 'a', 'a*b+', 'abb'
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int countA=0, countB=0;

    // Recognize "a"
    if(strcmp(str, "a")==0){
        printf("Accepted under 'a'\n");
    }
    // Recognize "abb"
    else if(strcmp(str, "abb")==0){
        printf("Accepted under 'abb'\n");
    }
    // Recognize "a*b+"
    else {
        int i=0;
        while(str[i]=='a'){
            countA++;
            i++;
        }
        while(str[i]=='b'){
            countB++;
            i++;
        }
        if(i==strlen(str) && countB>=1){
            printf("Accepted under 'a*b+'\n");
        } else {
            printf("Not Accepted\n");
        }
    }
    return 0;
}