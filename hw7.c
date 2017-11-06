/*******************************************************************************
*Nedah Ibrahim  
*CS125
*program HW7
*
*
*This program finds the prime factors of a series of numbers between an upper 
*and a lower bound provided by the user.
*******************************************************************************/

#include <stdio.h>

void factor(int );
int isPrime(int );
/*function main asks the user for the bounds and prints the factorization or
* that the number is prime*/
int main()
{
  int someNumber, lowerBound , upperBound;
  printf("Enter the lower bound and the upper bound: ");
  scanf("%d%d", &lowerBound, &upperBound);
  someNumber = lowerBound;

  for (someNumber = lowerBound; someNumber<=upperBound;++someNumber)
  {
    if (isPrime(someNumber)) 
    printf("%d is prime.\n", someNumber);
    else
    {
      printf("The factorization of %d is: ", someNumber);
      factor (someNumber);  
    }       
   } 
/*function factor prints the prime factors of a number */
}

void factor(int lower )
{
 
  int someNumber = 2;
  while(someNumber != lower)
  { 
    if (lower%someNumber == 0)
    {
    lower /= someNumber;
    printf("%d*",someNumber);
    }
    else
    {
    someNumber++;
    }
   }
   printf("%d\n", lower);
}
 
 /*isprime function checks if the number is prime or not and returns a value 
 to main.*/

int isPrime(int someNumber)
{
  int  divisor ;

  for (divisor = 2; divisor <= someNumber - 1; divisor++)
	{
	  if (someNumber % divisor == 0)
    {
      return 0;
    }
  }
  return 1;
}
/*indent function was used to indent*/
	    