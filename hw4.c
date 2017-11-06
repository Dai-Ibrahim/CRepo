xz/*******************************************************************
*Nedah Ibrahim
*CS125
*Program HW.4
*
*Ask the user for an interval and the program will output the
* values within that interval and determine if the values are
* prime or not and, calculate the prime density in the interval
*******************************************************************/
#include<stdio.h>
main ()
{
  int count, lowerBound, upperBound, divisor, integerTotal;
  float countOfPrimes = 0.0, average, countOfNonPrimes = 0.0, total;
  printf ("Lower Bound? ");
  scanf ("%d", &lowerBound);
  printf ("Upper bound? ");
  scanf ("%d", &upperBound);
  while (lowerBound <= upperBound)
    {
      count = 0;
      for (divisor = 2; divisor <= lowerBound - 1; divisor++)
	{
	  if (lowerBound % divisor == 0)
	    {
	      count = 1;
	      countOfNonPrimes = countOfNonPrimes + 1;
	      integerTotal = integerTotal + 1;
	      printf ("   %d is not prime.\n", lowerBound);
	      break;
	    }
	}
      if 
	{
	  countOfPrimes = countOfPrimes + 1;
	  integerTotal = integerTotal + 1;
	  printf ("   %d is prime.\n", lowerBound);
	}
      lowerBound++;
    }
  total = countOfPrimes + countOfNonPrimes;
  average = countOfPrimes / total;
  printf
    ("Over the interval from  %d to %d, inclusive, the prime density was %f\n",
     lowerBound - integerTotal, upperBound, average);
}

/******code was indented using the  indent function*****/
