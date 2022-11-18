#include<stdio.h>
#include<string.h>
int main(){
 char str[100];
 int i,a=0,d=0,s=0;
 printf("write something : ");
 fgets(str,100,stdin);
 for(i=0;str[i];i++){
    if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
        a++;
    else if(str[i]>='0' && str[i]<='9')
        d++;
    else
        s++;

 }

printf("Alphabet : %d\n",a);
printf("Digit : %d\n",d);
printf("special character : %d\n",s);

return 0;
}






