// Count the number of White Spaces in String
#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);
    int count=0;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' ' || a[i]== '\t' || a[i]=='\n'){
            count++;
        }
    }
    printf("No. of white spaces: %d\n", count);
    return 0;
}

/*  If you want to detect newline and newtab as White Space then add a little details 
in the condition portion with: a[i]== '\t' || a[i]=='\n' */