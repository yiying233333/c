#include <stdio.h>
int main()
{
    int n,i=1,j;
    scanf("%d",&n);
    int a[1105]={n};
    while(n!=1){
        if(n%2==0){
           n/=2;
        }else n=3*n+1;
        a[i++]=n;
    }
    for(j=i-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}