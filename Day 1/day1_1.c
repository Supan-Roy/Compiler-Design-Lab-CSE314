// Count Length of String and Reverse it with Extra Portion
#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    gets(a);
    int count=0;

    for(int i=0;i<a[i];i++){
        count++;
    }

    //count=strlen(a);

    printf("Length of string: %d\n", count);
    printf("Reversed Length: %d\n", count);
    printf("Reverse is: %s\n", a, strrev(a));
    return 0;
}