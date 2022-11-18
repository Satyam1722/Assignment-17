#include<stdio.h>
#include<string.h>
int main(){
 char str[100];
 int i;
 int a[150]={0};
 printf("write something : ");
 fgets(str,100,stdin);
 int n=strlen(str);
 for(i=0;i<n;i++){
    if(str[i]>='a' && str[i]<='z')
    a[str[i]-32]++;
    else
    a[str[i]]++;
 }

 for(i=0;i<150;i++)
    if(a[i])
    printf("%c come %d time\n",i,a[i]);

return 0;
}






