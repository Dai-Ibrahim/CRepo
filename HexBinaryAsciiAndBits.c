/*******************************************************************************
*Nedah Ibrahim
*CS125
*program HW5
*
*Ask the user for a text string and print it in hex, decimal and binary and
*count how many bits were set.
*******************************************************************************/


#include<stdio.h>
main()
{
  int bitCounter=0, i=0, mask = 0x80;
  char  aLine; 
  printf("Enter a line of text: ");
  scanf(" %c",&aLine);
  do
  {

      printf(" The ASCII code for '%c' is 0x%x in hex, %d in decimal, or ",aLine,aLine);
      for(i = 1; i <= 8; i++)
      { 
      if (aLine & mask)
      {
        printf("1");
        bitCounter++;
      }
      else
        printf("0");
        aLine <<= 1;
      }
        printf(", in binary, %d bits were set.\n",bitCounter);
        bitCounter = 0;
  }while ((scanf("%c",&aLine) == 1) && (aLine != '\n'));
}




