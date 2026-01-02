#include<stdio.h>
int main(){
    int arr[10][10];
    int a,b;
    printf("enter number of rows and columns");
    scanf("%d%d" ,&a,&b);
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
