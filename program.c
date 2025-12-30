#include <stdio.h>


int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    int i=1;
    unsigned long long fact=1;
    for (i=1;i<=a;i++){
        fact=fact*i;

    }
    printf("factorial of %d is %llu",a,fact);
    return 0;


}