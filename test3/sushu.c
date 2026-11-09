#include <stdio.h>
int main(void)
{
   int n;
   int count=0;
   int x=2;
   printf("请输入一个整数：");
   scanf("%d",&n);
   for(x=2;x<=n;x++){
   int i=2;
   int lzj=1;
   for(i=2;i<x;i++){
    if(x%i==0){
        lzj=0;
        break;
    }
   }if(lzj==0){
   }else {
    printf("%d\n ",x);
    count++;
   }}printf("一共有%d个素数",count);
    return 0;
    }