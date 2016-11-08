#include <stdio.h>

int TimeTo24(int origTime) {
int newTime = 0;
   newTime = origTime - 12;
   return newTime;
}
int main(void) 
{
int numHours = 0;
int numMinutes = 0;
int numSeconds = 0;

   printf("Welcome, please enter a the time of day in 24 hour time clock, starting with the hour\n");
   scanf("%d", &numHours);
   printf("Please enter the number of minutes with two digits eg 08 but not 8\n");
   scanf("%d", &numMinutes);
   printf("Please enter the number seconds\n");
   scanf("%d", &numSeconds);
   
   if (numHours < 12 && numHours >= 0) {
      printf("The time is %d:%d AM and %d seconds\n", numHours, numMinutes, numSeconds);
   }
   else if (numHours == 12) {
      printf("The time is %d:%d PM and %d seconds\n", numHours, numMinutes, numSeconds);
   }
   else if (numHours > 12 && numHours <= 24) {
      numHours = TimeTo24(numHours);
      printf("The time is %d:%d PM and %d seconds\n", numHours, numMinutes, numSeconds);
   }
   else {
      printf("Not a valid time enter a time in 24 hour clock\n");
   }
   
   return 0;
}
/*
Input : The time in 24 clock, specifically the number of hours minutes and seconds
Output : The time in 12 clock along with whether it is AM or PM
Main Algorithm:
1) Prompt the user for the exact input
2) Assign the time to three different variables 
3) If the hours are less than 12 print in 12 hour time
4) If the hours are equal to 12 then print the time in PM
5) If the time is greater than 12 but less than 24 then convert time to 12 hour and print in PM
Refinement:
2.1 Assign the hours to a varibale numHours
2.2 Assign the minutes to a variable numMinutes
2.3 Assign the seconds to a variable numSeconds
3.1 Print the numHours followed by minutes AM and followed by seconds
4.1 Print the number of hours followed by minutes PM and followed by seconds
5.1 Create a function to convert the 24 hour time to 12 hour
5.2 Assign the numHours to a variable called original, then create a new variable called newTime
5.3 Assign the difference of original - 12 to newTime
5.4 Return newTime
5.5 numHours is equal to whatever the function TimeTo24 returns
5.6 print the numHours followed by minutes PM and followed by seconds
 */