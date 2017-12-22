/*******************************************************************************
*Nedah Ibrahim
*CS125
*Program hw6
*
*Program that asks the user for two values( upper nad lower bound) and reurns a
*random number between the bounds
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

/********Create the first function that will compute the random number*********/

float randomBetween(float upper, float lower)

{
  return (float)rand()/(RAND_MAX /((upper-lower)))+lower;
}

/********The function main will ask for the inputs and print the result********/

main() 

{

  float  randomNumber, upperBound, lowerBound  ;
  printf("Enter lower and upper bound limits separated by a comma:  ");
  scanf("%f, %f",&lowerBound, &upperBound);

  randomNumber  = randomBetween(upperBound, lowerBound);

  printf("   Your random number is %f\n",randomNumber);
  
}

