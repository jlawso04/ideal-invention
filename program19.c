#include <stdio.h>
int main(void)
{
int i = 0; //Jenny Lawson, jlawso04@mail.uoguelph.ca , October 19 2016
do //do while so that when the user enters -1 the program ends
{
   printf("Enter a positive number between and inlcuding  1 and 7, or type -1 to quit\n");
   scanf("%d", &i); //Get user input
   
   switch (i) //Assign a day to the number 
   {
      case 1:
         printf("Sunday\n");
         break;
      case 2:
         printf("Monday\n");
         break;
      case 3:
         printf("Tuesday\n");
         break;
      case 4:
         printf("Wednesday\n");
         break;
      case 5:
         printf("Thursday\n");
         break;
      case 6:
         printf("Friday\n");
         break;
      case 7:
         printf("Saturday\n");
         break;
      }
      
} while ( i!= -1); //End of Do while
   printf("Goodbye\n"); //End of program
   return 0;
   
}        