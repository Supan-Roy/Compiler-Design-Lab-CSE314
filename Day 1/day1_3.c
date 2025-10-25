// Remove White Space from String
#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    char b[1000];
    fgets(a, sizeof(a), stdin);
    int j=0;
    for(int i=0; a[i]!='\0';i++){
        if(a[i]!=' '){
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    printf("The String is: %s\n", b);
    return 0;
}