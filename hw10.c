/*******************************************************************************
* Nedah Ibrahim
* CS125
* Program HW10
*
* creat an array of random integers and print it. Make a function that swaps the 
* the numbersand puts them into ascending order.
* Then print out th sorted array. 
*******************************************************************************/

#include<stdio.h>
/*******************************************************************************
* the main function asks the user for the array size and calls the functions
* that fill the array, prints it before and after it is sorted.
*******************************************************************************/

void swap( int * , int * );
void fillArray(int size, int[size]);
void printArray(int size2, int [size2]);
void sortArray( int size3, int [size3]);

void main()
{
  int arraySize;
  printf(" Size of the array? ");
  scanf("%d", &arraySize);
  int array[arraySize];
  fillArray(arraySize, array);
  printf("\n Before the sort, here's the array of random values:\n");
  printArray(arraySize, array);
  sortArray( arraySize, array);
  printf("\n After the sort, here's the array, nicely sorted into ascending order:\n");
  printArray(arraySize, array);
}
/**************this function fills the array with random number****************/

void fillArray(int size,  int arrayToFill[size])
{
  int inArray;
  for (inArray = 0; inArray < size; inArray++)
    {
       arrayToFill[inArray] =  rand();
    }
}
/*****************this function prints the array in a column*******************/
void printArray(int size2 , int arrayToPrint[size2])
{
  int stuffInArray;
  for (stuffInArray = 0; stuffInArray < size2; stuffInArray++)
  {
    printf("array [%d] is %d\n", stuffInArray,arrayToPrint[stuffInArray]);
  }
}
/*************this function sorts by calling the swap function*****************/
void sortArray(int sizeOfArray, int array2sort[])
{
  int small, large, sortTemp, sortArraySize;
  for(small = 0; small < sizeOfArray; small++)
  {
    for((large = 0); large < sizeOfArray; large++)
     {
       if(array2sort[small] < array2sort[large])
       {
        swap(&array2sort[small] , &array2sort[large]);
       }
     }
   }
}
/****this function when called swaps the places of two values in the array*****/
void swap(int*left, int*right)
{
  int temp;
  temp = *left;
  *left = *right;
  *right = temp;
}
/*the program was indented using the 'indent' command*/
