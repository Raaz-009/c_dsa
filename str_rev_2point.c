#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   printf("enter the string :");
   scanf("%s",&str);
   int left =0;
   int right=strlen(str)-1;
   
   while(left<right){
       char temp=str[right];
       str[right]=str[left];
       str[left]=temp;
       
       left++;
       right--;
   }
   
  

printf("reverse is : %s",str);

    return 0;
}
