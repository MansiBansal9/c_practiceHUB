#include<stdio.h>
#include<string.h>
int main(){
    char str[]="mansi";
    printf("the length of string is :%d\n",strlen(str));
    printf("the reverse of the string is\n");
    puts(strrev(str));
  
    char str1[]={'h','e','l','l','o','\0'};
    printf("concadenation of strings str and str1\n");
    puts(strcat(str,str1));
    puts(strcpy(str,str1));
    puts(str);
    puts(str1);
    puts(strcmp(str,str1));
    char str2[]="bansal";
    printf("%d\n",strcmp(str1,str2));
    printf("%d",strcmp(str2,str1));
}
