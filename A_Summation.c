#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    if(sum<0){
        sum=abs(sum);
    }
    printf("%lld\n",sum);
    return 0;
}