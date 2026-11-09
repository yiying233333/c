#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    double up=2.00;
    double down=1.00;
    double sum=0.00;
    int i=1;
    int t=0;
    for(i=1;i<=n;i++){
        t=up;
        sum+=up/down;
        up+=down;
        down=t;
    }printf("%.2f",sum);
    return 0;
}