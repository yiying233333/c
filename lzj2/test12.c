#include <stdio.h>
#include <string.h>
int main()
{
   char s[10000];
   char exit[]="exit";
   do{
   scanf("%s",s);
   int i,j;
   int ret=1;
   for(i=0;i<strlen(s);i++){
    if(s[i]<48||(s[i]>57&&s[i]<65)||(s[i]>90&&s[i]<97)||s[i]>122)
    {
        ret=0;
        break;
    }
   }
   if(ret==0){
    printf("Input Error\n");
   }else if(strcmp(s,exit)==0)printf("End Of Input\n");
   else{
       printf("%s\n",s);
       for(i=0;i<strlen(s)-1;i++){
        for(j=0;j<strlen(s)-1-i;j++){
            if(s[j]>s[j+1]){
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
       }printf("%s\n",s);
   }}while(strcmp(s,exit)!=0);
   return 0;
}