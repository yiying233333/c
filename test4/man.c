#include <stdio.h>
int main()
{
    int n=0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    int x=0;
    for(;n>0;){
        int i=n%10;
        n/=10;
        x=10*x+i;
    }
    printf("%d",x);
    return 0;
}