#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(0));
   int a=rand()%1000+1;
   int b=0;
   do{
      printf("请输入文本：\n");
      scanf("%d",&b);
      if(b>a){
         printf("大力\n");
      }else if(b<a){
         printf("小力\n");
      }else {
         printf("666运");
      }
   }while(b!=a);
   return 0;
}