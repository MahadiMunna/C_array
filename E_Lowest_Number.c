#include <stdio.h>

int main(){
    int n,low=1000000,pos=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<low){
            low=arr[i];
            pos=i;
        }
    }
    printf("%d %d",low,pos);
    return 0;
}