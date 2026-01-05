#include<stdio.h>

int main(){
    char str[10];
    printf("enter the string \n");
    gets(str);
    printf("\n");
    int i=0;
    while (str[i] != '\0'){
        i++;
    }
    
    printf("the length of this string is %d",i);
    return 0;
}
