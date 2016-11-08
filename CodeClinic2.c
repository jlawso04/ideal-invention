#include <stdio.h>
int main(void)
{
   char autoService1[50] = "";
   char autoService2[50] = "";
   
   printf("Enter the desired auto service:\n");
   scanf("%s %s", autoService1, autoService2);
   printf("You entered: %s %s", autoService1, autoService2);
   return 0;
}