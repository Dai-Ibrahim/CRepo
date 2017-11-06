/*******************************************************************************
*Nedah Ibrahim  
*CS125
*program HW13
*
*
*This program creates a linked list and prints it out. It also deletes values 
*from the list that the user inputs.
*******************************************************************************/

#include<stdio.h>
#include<malloc.h>

typedef struct alist
{
  int anumber;
  struct alist *ptr2next;
} ALIST;

main ()
{
  ALIST *first = NULL, *current, *temp;
  int found = 0;
  ALIST *previous;

  int item;
  printf ("Enter an integer for the list (0 stops the creation loop): ");
  scanf ("%d", &item);
  do
    {
      /*transversal logic */
      temp = malloc (sizeof (ALIST));
      temp->anumber = item;
      temp->ptr2next = first;
      first = temp;



      current = first;		/* initializing for traversal (printing) */
      printf ("  ");
      while (current != NULL)
	{
	  printf ("%d", current->anumber);
	  current = current->ptr2next;
	  if (current != NULL)
	    {
	      printf ("->");
	    }
	}


      printf
	("\nEnter an integer for the list (0 stops the creation loop): ");
      scanf ("%d", &item);
    }
  while (item != 0);
  if (item == 0)
    {
      previous = first;
      printf ("  ");
      while (previous != NULL)
	{
	  printf ("%d", previous->anumber);
	  previous = previous->ptr2next;
	  if (previous != NULL)
	    {
	      printf ("->");
	    }
	}
    }

  /*start of deletion logic */
  printf
    ("\n\nEnter a value to be deleted from the list (0 ends this program):  ");
  scanf ("%d", &item);
  do
    {
      if (first == NULL)	/*if the list is empty */
	{
	  printf ("the list is empty");
	}
      else
	{			/*if item to be deleted is the first on the list */
	  if (item == first->anumber)
	    {
	      first = first->ptr2next;
	    }
	  else
	    {			/*initializing current and previous */
	      previous = first;
	      current = previous->ptr2next;
	      while (current != NULL && current->anumber != item)
		{
		  previous = previous->ptr2next;	/*searching logic */
		  current = current->ptr2next;
		}		/*if item to be deleted is not in the list */
	      if (current == NULL && item != 0)
		{
		  printf ("%d is not in the list; ", item);
		}
	      else
		{
		  previous->ptr2next = current->ptr2next;	/*deletion logic */
		}

	    }			/*printing the list after deletion */
	  previous = first;
	  printf (" Here's the list: ");
	  while (previous != NULL)
	    {
	      printf ("%d", previous->anumber);
	      previous = previous->ptr2next;
	      if (previous != NULL)
		{
		  printf ("->");
		}
	    }

	}
      if (first == NULL)
	{
	  printf ("[The list is empty]");
	}
      printf
	("\nEnter a value to be deleted from the list (0 ends this program): ");
      scanf ("%d", &item);
    }
  while (item != 0);
}

/*indented using indent command*/
