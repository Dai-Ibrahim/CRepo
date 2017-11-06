/*******************************************************************************
*Nedah Ibrahim
*CS125
*program HW8
*
*Take in a string and determine whether it is a palindrome or not.
*******************************************************************************/

#include<stdio.h>
#include<string.h>
void reverse(char[]);
int palindrome(char[]);
int main()
{
  char string[20];
  char temp;
  int index = 0;
   printf("Enter a string: ");
   while(temp != '\n')
   {
     scanf("%c", &temp);
     if (temp!= '\n')
     {
       string[index] = temp;
       index++;
     }
   }
   
        reverse(string);
        printf("\n  The reverse string is %s", string);
        
      if (palindrome(string)) 
      {
        printf(", so we do have a palindrome\n");
      }    
     else
      {
        printf(", so we don't have a palindrome\n", string);
      }
    return 0;
}
/*make a function that reverses the string */
void reverse(char array[])
{
  int reverseIterator = strlen(array) - 1;
  int stringIterator;
  for (stringIterator=0;stringIterator <= reverseIterator ;stringIterator++)
  {  
    char swap = array[stringIterator];
    array[stringIterator] = array[reverseIterator];
    array[reverseIterator] = swap;
    reverseIterator--;
  }
}
/*function that checks if the string is a palindrome*/
int palindrome(char newArray[])
{
  int upIndex;
  for(upIndex =0;upIndex <= (strlen(newArray) - 1) ;upIndex++)
  {
    if(newArray[upIndex] != newArray[strlen(newArray) - upIndex-1])
    {
      return 0;
    }
  }
  return 1;
}  