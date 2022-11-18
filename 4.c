#include<stdio.h>
#include<stdlib.h>
int main(){
 char str[100];
 int i;
 printf("write something : ");
 fgets(str,100,stdin);

 for(i=0;str[i];i++){
    if(str[i]>=97 && str[i]<=122)
      str[i]-=32;
 }
printf("%s",str);
return 0;
}



