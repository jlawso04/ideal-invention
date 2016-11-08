#include <stdio.h>

#include <time.h>  //Jenny Lawson , jlawso04@mail.uoguelph.ca, October 12 2016 9:57AM

#include <stdlib.h>

int  main(void)
{
srand(time(NULL));
int i = rand()%5; 
int j = rand()%5;
int numPackages1 = (rand()%11) +1;
int numPackages2 = (rand()%11) +1;

printf("For a  snack you should eat:\n");

switch (i)
{
   case 0:
      printf("%d packages of Cookies and", numPackages1);
      break;
   case 1:
      printf("%d packages of Cheetos and", numPackages1);
      break;
   case 2:
      printf("%d packages of Peanut Butter Cups and", numPackages1);
      break;
   case 3:
      printf("%d packages of Skittles and", numPackages1);
      break;
   case 4:
      printf("%d packages of Ketchup Chips and", numPackages1);
      break;
}
switch (j)
{
   case 0:
      printf(" %d packages of Cookies\n", numPackages2);
      break;
   case 1:
      printf(" %d packages of Cheetos\n", numPackages2);
      break;
   case 2:
      printf(" %d packages of Peanut Butter Cups\n", numPackages2);
      break;
   case 3:
      printf(" %d packages of Skittles\n", numPackages2);
      break;
   case 4:
      printf(" %d packages of Ketchup Chips\n", numPackages2);
      break;
}


return 0; 
} 
