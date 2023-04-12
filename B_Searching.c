#include <stdio.h>

int main(){
    int n,x,flag=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag++;
            printf("%d",i);
            break;
        }
    }
    if(flag==0){
        printf("-1");
    }
    return 0;
}