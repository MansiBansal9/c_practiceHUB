#include<stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;


}
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("values before swappinga=%d\nb=%d\n\n",a,b);
    swap(&a,&b);
    printf("values after swappinga=%d\nb=%d",a,b);
    
    return 0;


}
