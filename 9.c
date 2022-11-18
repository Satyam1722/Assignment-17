#include<stdio.h>
#include<string.h>
int main(){
 char str[100];
 int i,j;
 printf("write something : ");
 fgets(str,100,stdin);
 int n=strlen(str);
 for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(str[i]>str[j]){
            int temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
 }
printf("%s",str);
return 0;
}





