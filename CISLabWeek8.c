#include <stdio.h>

void PrintMessage(double numSleep)
{
   if ((numSleep > 0) && (numSleep <= 4))
   {
      printf("Sleep Deprived!\n");
   }
   else if ((numSleep > 4) && (numSleep < 6))
   {
      printf("You need more sleep\n");
   }
   else if ((numSleep >= 6) && (numSleep < 8))
   {
      printf("Not quite enough\n");
   }
   else if (numSleep < 0)
   {
      printf("Not a valid input\n");
   } 
   else 
   {
      printf("Well Done\n");
   }
   return;
}
 
int main(void)
 {
 double numSleep = 0.0;
 
 /*Test 1 
   All Positive decimal value */
 numSleep = 4.5;
    printf("Test 1:(positive decimal value) using %lf\n", numSleep);
    printf("Expecting: You need more sleep\n");
    printf("Output:\n");
    PrintMessage(numSleep);
 
 /*Test 2: Positive whole number value*/
 numSleep = 7.0;
    printf("Test 2:(positive whole number value) using %lf\n", numSleep);
    printf("Expecting: Not quite enough\n");
    printf("Output:\n");
    PrintMessage(numSleep); 
    
 /*Test 3: Negative whole number value*/
 numSleep = -8.0;
    printf("Test 3: (Negative whole number value) using %lf\n", numSleep);
    printf("Expecting: Not a valid input\n");
    printf("Output:\n");
    PrintMessage(numSleep);

 /*Test 4: Negative decimal value*/
 numSleep = - 1.5;
    printf("Test 4: (Negative decimal value) using %lf\n", numSleep);
    printf("Expecting: Not a valid input\n");
    printf("Output:\n");
    PrintMessage(numSleep);
    
 /*Test 5: Large positive whole number value*/
 numSleep = 578398;
    printf("Test 5: (Large positive whole number value) using %lf\n", numSleep);
    printf("Expecting: Well done\n");
    printf("Output:\n");
    PrintMessage(numSleep);
    
    return 0;
 }  