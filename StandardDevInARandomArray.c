/*******************************************************************************
*Nedah Ibrahim
*CS125
* program HW9
*
*
*creat a random 5x6 array (between 0 and 1) and make functions that print the 
*array, find the value and location of the smalest and largest values, and
*a function that finds the standard deviation.
*******************************************************************************/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define COL 6
#define ROW 5

void fillArray(int maxRow, float[][maxRow]);
void printArray(int maxRow2 , float [][maxRow2]);
float standardDev(int maxRow3 , float [][maxRow3]);
void otherStats(int maxRow4 , float [][maxRow4]);


/*Main function prints out the table of arrays and the standard deviation by 
calling the other functions */

int main()
{
  float array[ROW][COL] = {0};
  fillArray(COL, array);
  printArray(COL, array);
  otherStats(COL, array);
  printf("\nstandard deviation = %f\n",standardDev(COL,array));
}

/*fillArray creates the random array of values between 0 and 1*/

void fillArray(int maxRow, float arrayToFill[][maxRow])
{
  
  int vertical,horizontal;
  for (vertical=0; vertical<COL ; vertical++)
  {
    for (horizontal = 0; horizontal < maxRow; horizontal++)
    {
   arrayToFill[vertical][horizontal] =  (float) rand()/RAND_MAX;
    }
  }
}

/*printArray prints the random array and the headers*/

void printArray(int maxRow2 , float arrayToPrint[][maxRow2])
{
  int Vertical2,horizontal2;
   
  printf("column #: \t0\t1\t2\t3\t4\t5\n");
  printf("   row #|__________________________________________________\n");
  for (Vertical2=0; Vertical2<COL ; Vertical2++)
  {
    printf("      %d |",Vertical2);
    for (horizontal2 = 0; horizontal2 < maxRow2; horizontal2++)
      {
        printf("\t%4.2f ", arrayToPrint[Vertical2][horizontal2]);
      }
    printf("\n");
   }
}

/*standardDeviation function contains the process of calculating the standard 
deviation and returns the value to main to be printed.*/

float standardDev(int maxRow3 , float arrayOfDeviation[][maxRow3])
{
  float mean=0.0,deviation=0.0,variance=0.0;  
  int count=0;
  int vertical3,horizontal3;
  for (vertical3=0; vertical3<COL ; vertical3++)
  {
    for (horizontal3 = 0; horizontal3 < maxRow3; horizontal3++)
    {
      mean +=  arrayOfDeviation[vertical3][horizontal3];
      count++; 
    }
  }
   mean = mean/count;
   for (vertical3=0; vertical3<COL ; vertical3++)
  {
    for (horizontal3 = 0; horizontal3 < maxRow3; horizontal3++)
    {
     variance +=  (arrayOfDeviation[vertical3][horizontal3]-mean)*(arrayOfDeviation\
     [vertical3][horizontal3]-mean);
    }
  }
  variance/= count;
  return sqrt(variance);
}

/*otherStats function contains and array with 6 spaces that are designed to 
store the values of the smallest value, its horizontal position and vertical
position, the largest number, its horizontal position and vertival position
in 0,1,2,3,4,5 respectively */
/*vertical4 and horizontal4 go through an ontermediate step where a cast
operator is used to convert them to float then back to int, because the array 
is type float and they needed to  match.*/

void otherStats(int maxRow4 , float arrayOfStats[][maxRow4])
{
  float stats[6];
  int vertical4,horizontal4;
  stats [0]= arrayOfStats[0][0];
  stats[3]= arrayOfStats[0][0];
  
  for (vertical4=0; vertical4<COL ; vertical4++)
  {
    for (horizontal4 = 0; horizontal4 < maxRow4; horizontal4++)
    {
      if (arrayOfStats[vertical4][horizontal4]> stats[3])
      {
        stats[3] = arrayOfStats[vertical4][horizontal4];
        stats[4]=(float) vertical4;
        stats[5]= (float)horizontal4;
      }
      if(arrayOfStats[vertical4][horizontal4] < stats[0])
      {
        stats[0] = arrayOfStats[vertical4][horizontal4];
        stats[1]= (float)vertical4;
        stats[2]= (float)horizontal4;
      }
     }
    }
    printf("largest value was %1.2f in row %d, column %d\n",\
      stats[3], (int)stats[4], (int)stats[5]);
    printf("smallest value was %1.2f in row %d, column %d ",\
      stats[0], (int)stats[1], (int)stats[2]);
}
/*indent function was used to indent*/
