#inlcude <stdio.h>

int main(void) 
{
int num1 = 0;
int num2 = 0;
int num3 = 0;
int i = 0;
   printf("Enter user numbers:");
   scanf("%d/%d", &num1, &num2);
   if (num1 > num2) 
   {   
      num3 = num1 - num2;
   }
   printf("%d %d/%d", num1, num2, num3);
return 0;
}  
      
   