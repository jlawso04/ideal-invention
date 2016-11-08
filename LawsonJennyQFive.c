#include <stdio.h>
#include <string.h>

int main(void)
{
char myString[25] = "";
char myPluralString[27] = "";
char yEnd[5] = "ies";
char schsEnd[5] = "es";
char allEnd[5] = "s";
int x = NULL;
int y = 0;
   printf("Welcome, enter a noun less than 25 characters:\n");
   scanf("%s", myString);
   
   x = strlen(myString);
   y = strlen(myString);
   
   if ((int)strrchr(myString, 'y') == x){ //if the last letter is y
      strncat(myString, myPluralString, y); //remove the last letter in the noun
      strcat(myPluralString, yEnd); //add "ies" to the end of the noun
      printf("%s\n", myPluralString);
   }
   else if (((int)strrchr(myString, 'h') == x) && ((int)strrchr(myString, 's') == (x-1))) { // if the last letter is h, and the second last was s
      strcat(myString, schsEnd);
      printf("%s\n", myString);
   }
   else if (((int)strrchr(myString, 'h') == x) && ((int)strrchr(myString, 'c') == (x-1))) { // if the last letter is h and the second last was c
      strcat(myString, schsEnd);  //add es to the end
      printf("%s\n", myString);
   }
   else if ((int)strrchr(myString, 's') == x) {
      strcat(myString, schsEnd);
      printf("%s\n", myString);
   }
   else {
      strcat(myString, allEnd);
      printf("%s\n", myString);
   }
   
   return 0;
/*Algorithm
Input: noun less than 25 characters
Output:plural of the noun
Main Algorithm:
1) Prompt user for input
2)Read noun to see what the ending is 
3)Remove any necessary letters
4)Add the appropriate ending
Refinement
2.1 assign the length of the noun to a variable x
2.2 find the ending of the noun by seeing what the last two letters are
3.1 if the noun ends in 'y' remove the letter y 
4.1 use an if else statement depending on the ending 
4.2 Add the appropriate ending
4.3 print the result

For this program the input sufficiently tests the output since it provides at least one example of each condition. */   
}