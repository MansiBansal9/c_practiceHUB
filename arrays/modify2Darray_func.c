#include<stdio.h>
int main(){int a,b;
    int arr[10][10];

    printf("enter number of rows an columns");
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
     for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    func(arr);
       for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int func(int array[][10]){int a,b;
    int f;
    printf("enter the position of element to change");
    scanf("%d%d",&a,&b);
    printf("enter the new value");
    scanf("%d",&f);
     array[a][b]=f;
     
        printf("\n");
     
     return 0;

}
