// C program to count Vowel, Consonant & Digit
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int vowels=0, consonants=0, digits=0;

    for(int i=0;str[i]!='\0';i++){
        char ch = tolower(str[i]);
        if(isdigit(ch)){
            digits++;
        }
        else if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);
    printf("Total Digits: %d\n", digits);
    return 0;
}
