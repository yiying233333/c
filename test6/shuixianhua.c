#include <stdio.h>
int main()
{
    printf("请输入一个较小的整数\n");
    int n=0;
    scanf("%d",&n);
    int first=1;
    int i=1;
    while(i<n){
        first*=10;
        i++;
    }
    i=first;
    int t=0;
    while (i<first*10){
         int t=i;
           int sum=0;
         do{
           int d=t%10;
           t/=10;
           int p=1;
           int q=0;
           while(q<n){
            p*=d;
            q++;
           }sum+=p;
         }while(t>0);
         if(sum==i){
            printf("%d ",i);
         }i++;
    }
    return 0;
}