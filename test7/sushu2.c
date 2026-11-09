#include <stdio.h>
int main()
{
    printf("请输入两个整数：\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int first=a;
    int cnt=0;
    int sum=0;
    for(first=a;first<=b;first++){
        int t=2;
        int lkb=1;
        for(t=2;t<first;t++){
            if(first%t==0){
                lkb=0;
            }
            }if(lkb==1){
                cnt++;
                sum+=first;
        }
    }printf("%d到%d之间有%d个素数\n",a,b,cnt);
    printf("它们的和为%d",sum);
    return 0;
}