#include<stdio.h>
#include<stdlib.h>
int main(){
 char str[100],c;
 int i,count=0;
 printf("write something : ");
 fgets(str,100,stdin);
 printf("which charachter : ");
 fflush(stdin);
 scanf("%c",&c);
 for(i=0;str[i];i++){
    if(str[i]==c)
        count++;
 }
printf("occurence is %d ",count);
return 0;
}

