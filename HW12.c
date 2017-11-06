/*******************************************************************************
*Nedah Ibrahim
*CS125
* program HW12
*
*create 5 random pairs of vectors and perform vector addition on them.
*******************************************************************************/
#include<stdlib.h>
#include<stdio.h>
/*************************DEFINE THE STRUCTURE*********************************/
typedef struct
{
  float iHat, jHat;
} VECTOR;
/****************************FUNCTION PROTOTYPES*******************************/
void fillArray (VECTOR array[5][2]);
void printArray (VECTOR arrayToPrint[5][2]);
VECTOR addVector (VECTOR, VECTOR);
/**********************MAIN PRINTS THE VECTOR SUMS*****************************/
int main ()
{
  VECTOR vectorArray[5][2];
  fillArray (vectorArray);
  printArray (vectorArray);
  printf ("  And here are their vector sums:\n\n");
  int rows;
  for (rows = 0; rows < 5; rows++)
    {
      VECTOR temp;
      temp = addVector (vectorArray[rows][0], vectorArray[rows][1]);
      printf ("       (%5.2f,%5.2f)+(%5.2f,%5.2f) = (%5.2f, %5.2f) \n",
	      vectorArray[rows][0].iHat, vectorArray[rows][0].jHat,
	      vectorArray[rows][1].iHat, vectorArray[rows][1].jHat, temp.iHat,
	      temp.jHat);
    }
}
/************************FILLARRAY ASSIGNS RANDOM NUMBERS BETWEEN -1 AND 1 
TO THE COMPONENTS OF THE ARRAY*************************************************/
void fillArray (VECTOR array[5][2])
{
  int ROW, COL;
  for (ROW = 0; ROW < 5; ROW++)
    {
      for (COL = 0; COL < 2; COL++)
	{
	  array[ROW][COL].iHat =
	    (float) rand () / (RAND_MAX / ((1 - (-1)))) - 1;
	  array[ROW][COL].jHat =
	    (float) rand () / (RAND_MAX / ((1 - (-1)))) - 1;
	}
    }
}
/****PRINTARRAY PRINTS THE ARRAY WITH THE NEW VALUES IN THE REQUIRED FORMAT****/
void printArray (VECTOR arrayToPrint[5][2])
{
  int ROWS;

  printf ("  Here are the 5 pairs of vectors:\n\n");

  for (ROWS = 0; ROWS < 5; ROWS++)
    {
      printf ("    Pair #%d: ", ROWS);

      printf ("(%5.2f,%5.2f),(%5.2f,%5.2f) ", arrayToPrint[ROWS][0].iHat,
	      arrayToPrint[ROWS][0].jHat, arrayToPrint[ROWS][1].iHat,
	      arrayToPrint[ROWS][1].jHat);

      printf ("\n");
    }
  printf ("\n");
}
/*********ADDVECTOR PREFORMS VECTOR ADDITION ON THE PAIRS OF VECTORS***********/
VECTOR addVector (VECTOR vec1, VECTOR vec2)
{
  VECTOR newVec;
  newVec.iHat = vec1.iHat + vec2.iHat;
  newVec.jHat = vec1.jHat + vec2.jHat;
  return newVec;
}
/*******NOTE: THE EXTRA \n'S IN THE CODE ARE THERE N ORDER TO SATISFY THE FORMAT
        INDENT COMMAND WAS USED TO INDENT THE CODE*****************************/