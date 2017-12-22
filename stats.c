/**********************************************
*Nedah Ibrahim
*CS125
*Program hw2
*
*prompt the user for an integer, when 0 is entered the program terminates and gives
*statistics(how many integers in total, total of positive and negative integers,
*the smallest and greatest values entered
**********************************************/
#include<stdio.h>
main ()
{
  int numb, pos = 0, neg = 0, max, min, count = 0;
  do
    {
      printf ("Enter an integer( 0 terminates the program):");
      scanf ("%d", &numb);
      if (count == 0)
	{
	  max = numb;
	  min = numb;
	}
      count = count + 1;
      if (numb == 0)
	count = count - 1;
      if (numb != 0)
	{
	  if (numb > max)
	    max = numb;
	  else if (numb < max)
	    max = max;
	  if (numb < min)
	    min = numb;
	  else if (numb > min)
	    min = min;
	  if (numb > 0)
	    pos = pos + 1;
	  else if (numb < 0)
	    neg = neg + 1;
	}
    }
  while (numb != 0);
  printf
    ("You enterd %d non-zero integers; %d were positive, %d were negative.\n",
     count, pos, neg);
  printf ("The largest value you entered was %d; the samllest was %d.\n", max,
	  min);
}
