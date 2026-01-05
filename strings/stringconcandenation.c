#include<stdio.h>
#include<string.h>
int main(){
    char str1[10];
    char str2[10];
    printf("enter string1\n");
    gets(str1);
    printf("\n");
    int l1=strlen(str1);
    printf("enter string 2\n");
    gets(str2);
    printf("\n");
    int l2=strlen(str2);
    char resstr[20];
    for(int i=0;i<l1;i++){
        resstr[i]=str1[i];
    }
    int i=0;
    while (str2[i] !='\0'){
        resstr[l1]=str2[i];
        l1++;
        i++;
    } 
    int n = (l1+1);
    resstr[n]="\0";
    printf("the concandenated string is \n");
    puts(resstr);
     

        
    return 0;

}
