// C program to print the next 3 characters from the input
#include<stdio.h>
#include<string.h>

int main(){
    char s[4];
    printf("Enter 3 characters: ");
    scanf("%3s", s);
    printf("Next 3 characters: ");

    for(int i=0;i<3;i++){
        s[i]=s[i]+3;
    }
    printf("%s", s);
    return 0;
}
