#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ROW 5
#define COLS 81

int replaceInString(char original[], char substring[], char replace[])
{
}

int findSubString(char original[], char toFind[])
{
}

void insertString(char original[], int start, int length, char toInsert[])
{
int numChars = length - start;
   strncpy(toInsert, original, numChars);
   return;
}

void initializeBuffer(char buf[ROW][COLS])
{
   strcpy(buf[0], "I'm trying to find a needle in a haystack");
   strcpy(buf[1], "The same today, yesterday and tomorrow");
   strcpy(buf[2], "The same today, yesterday and tomorrow");
   strcpy(buf[3], "The same today, yesterday and tomorrow");
   strcpy(buf[4], "The same today, yesterday and tomorrow");
   return;
}
int main(void) 
{
char buf[ROW][COLS];
int edit = 0;
int operation = 0;
char userString[80];
char replace[80];

   initializeBuffer(buf[ROW][COLS]);
   printf("Welcome, do you wish to edit or to quit? Please enter the line number you wish to edit, or enter -1 to quit\n");
   scanf("%d", &edit);
   do 
   {
   printf("Please enter a line to edit\n");
   scanf("%d", &edit);
   printf("If you wish to replace an entire line please enter 1,  if you wish to replace a substring, then enter 2.");
   scanf("%d", &operation);
   if (operation == 1)
   {
      printf("Please enter the text you would like to replace :\n");
      scanf("%s", replace) 
   }
   
   } while (edit!= -1);
   
   printf("Thank You\n");
   
   return 0;
}