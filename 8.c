#include<stdio.h>
#include<string.h>
int main(){
 char str[100],b[100];
 int i;

 printf("write something : ");
 fgets(str,100,stdin);
 for(i=0;str[i];i++){
    b[i]=str[i];
 }

printf("%s",b);
return 0;
}






