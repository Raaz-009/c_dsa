#include <stdio.h>
#include <string.h>

int main() {
   char str[100],rev[100]="";
   printf("enter the string :");
   scanf("%s",&str);
   int length=strlen(str);
   
   for(int i=length-1;i>=0;i--){
       char temp[2]={str[i]};
       strcat(rev,temp);
   }

printf("reverse is : %s",rev);

    return 0;
}
