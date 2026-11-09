#include <stdio.h>
int main()
{
    int n=0;
    int a=0;
    printf("请输入一个整数：\n");
    scanf("%d",&n);int sss=n;
    int i=1;
    while(n>9){
        i*=10;
        n/=10;
    }n=sss;
    for(;i>=1;){
       a=n/i;
       n%=i;
       i/=10;
       printf("%d",a);
       if(i!=0)
       {printf(" ");}
    }
    return 0;
}
