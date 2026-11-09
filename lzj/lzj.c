#include <stdio.h>
#include <math.h>
int prime(int *a,int *b){
    int i;
    int ret=1;
    if(*a==1||*a==2){
        ret=1;
    }else{
        for(i=2;i<=sqrt(*a);i++){
            if(*a%i==0){
                ret=0;
                *a/=i;
                *b=i;
                break;
            }
        }
    }
    return ret;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a,j=0;
        scanf("%d",&a);
        while(prime(&a,&j)==0){
           printf("%d*",j);
        }if(prime(&a,&j)==1){
            printf("%d\n",a);
        }
    }return 0;
}
