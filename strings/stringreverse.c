#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("enter the string which you want to reverse\n");
    gets(str);
    int l=strlen(str);
    char strrev[10];
    for (int i=0;i<l;i++){
        strrev[i]=str[l-i-1];
        
    }
    strrev[l]='\0';
    printf("the reverse of the strinng is\n");
    puts(strrev);
}