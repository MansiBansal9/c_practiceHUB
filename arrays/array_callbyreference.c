#include <stdio.h>
int func(int array[]){
    array[0]=12;
    for(int i=0;i<3;i++){
        printf("%d\t",array[i]);
    }
}
int main(){
    int arr[]={1,87,98};
    func(arr);
    return 0;
}
