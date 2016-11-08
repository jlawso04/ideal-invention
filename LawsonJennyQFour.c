#include <stdio.h>

int FindLarge(int num1, int num2, int num3) {
int largeNum = 0;    
   if (num1 > num2 && num1 > num3) {
      largeNum = num1;
   }
   else if (num2 > num1 && num2 > num3) {
      largeNum = num2;
   }
   else if (num3 > num1 && num3 > num2) {
      largeNum = num3;
   }
  
   return largeNum;
}
  
int FindSmall(int num1, int num2, int num3) {
int smallNum= 0;
   if (num1< num2 && num1< num3) {
      smallNum = num1;
   }
   else if (num2 < num1 && num2 < num3) {
      smallNum = num2;
   }
   else if (num3 < num1 && num3 < num2) {
      smallNum = num2;
   }
   return smallNum;
}
 
int main(void)
{
int numInput[2];
int largeVal= 0;
int smallVal = 0;
   printf("Enter three integers seperated by one space each\n");
   scanf("%d %d %d", &numInput[0], &numInput[1], &numInput[2]);
   largeVal =  FindLarge(numInput[0], numInput[1], numInput[2]);
   printf("%d ", largeVal);
   smallVal = FindSmall(numInput[0], numInput[1], numInput[2]);
   if (numInput[0] != largeVal && numInput[0] != smallVal) {
      printf("%d ", numInput[0]);
   }
   else if (numInput[1] != largeVal && numInput[1] != smallVal) {
      printf("%d ", numInput[1]);
   }
   else if (numInput[2] != largeVal && numInput[1] != smallVal) {
      printf("%d ", numInput[2]);
   }
   printf("%d \n", smallVal);
   return 0;
}    
/* The inputs are the three integers. The output is the order of those three integers.
1)Prompt the user for input and assign the values to an array
2)Find the largest number and print it. 
3)Find the smallest number. 
4)Find the number that was not used and print it.
5)Print the smallest number.
Refinement:
2.1 Create a function named FindLarge and inside define a variable of the large number
2.2 If the first number is larger than all other numbers assign it to the variable  large number and return it as the large value
2.3 If the second number is the largest number then assign it to large number and return it as the large value
2.4 If the third number is the largest number then assign it to large number and return that value
3.1 Create a function named FindSmall and inside define a variable small number
3.2 If the first number is smaller than the rest, then assing it to small number and return it
3.3 If the second number is smaller than the rest, then assign it to small number and return it 
3.4 If the third number is smaller than the rest, then assign it to small number and return it
4.1 If the number was not the small number or the large number then print it after the large number
*/
