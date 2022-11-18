#include<stdio.h>
#include<string.h>
int main(){
 char str[100];
 int i,j;
 printf("write something : ");
 fgets(str,100,stdin);
 int n=strlen(str);
 for(i=0,j=n-1;i<j;i++,j--){
    int temp=str[i];
    str[i]=str[j];
    str[j]=temp;
 }
printf("%s",str);
return 0;
}





