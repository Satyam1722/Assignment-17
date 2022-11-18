#include<stdio.h>
int main(){
 char str[100];
 int i;
 printf("write something : ");
 fgets(str,100,stdin);
 for(i=0;str[i];i++);
 printf("length is %d",i);

return 0;
}
