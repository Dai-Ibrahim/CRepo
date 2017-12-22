/***********************************************************************
* Nedah Ibrahim
* CS125
* Program HW3
*
* take input from the user and return the total, sum, average, a maximium
and minimum of the values. Express it in overall, positive and negative values.
Give messages to the user explaining the special situations.
**************************************************************************/

#include<stdio.h>
main ()
{
  int input, sum = 0, sumPos = 0, sumNeg =
    0, minPos, maxPos, minNeg, maxNeg, max, min;
  float avg, avgPos, avgNeg, count = 0.0, positive = 0.0, negative = 0.0;
  do
    {
      printf ("Enter an integer (0 terminates):");
      scanf ("%d", &input);
/*******************************OVERALL VALUES****************************/
      if (count == 0.0)
	{
	  max = input;
	  min = input;
	}
      if (input != 0)
	{
	  sum = sum + input;
	  count = count + 1;
	}
      if (input != 0)
	{

	  if (input > max)
	    max = input;
	  else if (input < max)
	    max = max;
	  if (input < min)
	    min = input;
	  else if (input > min)
	    min = min;
/************************THE POSITIVE VALUES********************************/
	  if (input > 0)
	    {
	      if (positive == 0)
		{
		  minPos = input;
		  maxPos = input;
		}
	      positive = positive + 1;
	      sumPos = sumPos + input;
	      if (input > maxPos)
		maxPos = input;
	      else if (input < maxPos)
		maxPos = maxPos;
	      if (input < minPos)
		minPos = input;
	      else if (input > minPos)
		minPos = minPos;
	      avgPos = sumPos / positive;
	    }
/*************************THE NEGATIVE VALUES*******************************/
	  if (input < 0)
	    {
	      if (negative == 0)
		{
		  minNeg = input;
		  maxNeg = input;
		}
	      negative = negative + 1;
	      sumNeg = sumNeg + input;
	      if (input > maxNeg)
		maxNeg = input;
	      else if (input < maxNeg)
		maxNeg = maxNeg;
	      if (input < minNeg)
		minNeg = input;
	      else if (input > minNeg)
		minNeg = minNeg;
	      avgNeg = sumNeg / negative;
	    }
	}
      avg = sum / count;
    }
  while (input != 0);
/*********************************** OUTPUT*******************************/
  printf ("\n");
  {
    if (count != 0)
      {
	printf ("Overall:\n");
	printf
	  ("Count is  %.0f, sum is %d, maximum is %d, minimum is %d, average is %.3f\n\n",
	   count, sum, max, min, avg);
      }
    else if (count == 0)
      printf
	("Since you did not enter any data, there are no results to print.\n");
  }

  if (positive != 0 && negative != 0)
    {
      printf ("Positives:\n");
      printf
	("Count is %.0f, sum is %d, maximim is %d, minimum is %d, average is %.3f\n\n",
	 positive, sumPos, maxPos, minPos, avgPos);
    }
  else if (positive == 0 && count != 0)
    printf
      ("There were no positive numbers entered so there are no positive results and the negative results are the same as the overall results.\n");

  {
    if (negative != 0 && positive != 0)
      {
	printf ("Negatives:\n");
	printf
	  ("Count is %.0f, sum is %d, maximim is %d, minimum is %d, average is %.3f\n\n",
	   negative, sumNeg, maxNeg, minNeg, avgNeg);
      }
    else if (negative == 0 && count != 0)
      printf
	("There were no negative numbers entered so there are no negative results and the positive results are the same as the overall results.\n");
  }


}
