#include<stdio.h>
int main(){
    int n,nt;
    printf("enter the no. of terms :");
    scanf("%d",&n);
    int t1=0,t2=1;
    for (int i=0;i<=n;i++) {
         printf ("%d\t",t1);
         nt=t1+t2;
         t1=t2;
        t2=nt;

    }
    return 0;


}