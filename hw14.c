/*******************************************************************************
*Nedah Ibrahim
*CS125
*program HW14
*
*a mini scanf that disregards white spaces and only takes integers. 
*indented using indent command
*******************************************************************************/
#include<stdio.h>
void miniscan (int *);
main ()
{
  int integer = 0;
  printf ("Enter an integer:");
  miniscan (&integer);
  printf ("\nMain's integer (printed with a %%d) is now %d \n\n", integer);

}

void
miniscan (int *integer)
{
  int wscounter = 0, charcounter = 0, read = 0;
  char characters;
  do
    {
      scanf ("%c", &characters);
      charcounter++;
      if (characters == ' ' || (charcounter == 1 && characters == '\n'))
	{
	  wscounter++;
	}
      if (characters >= '0' && characters <= '9' && !read)
	{
	  *integer = characters - 48;
	  read = 1;
	}
      else if (characters >= '0' && characters <= '9' && (read))
	{
	  *integer = ((*integer * 10) + (characters - 48));
	}
    }
  while (!
	 ((charcounter > 1 && characters == '\n')
	  || ((characters >= 33 && characters <= 48)
	      || (characters >= 58 && characters <= 127))));
  if (!read)
    {
      printf
	("\n Error, scan terminated by non-whitespace, non-digit before any digits \
  encountered");
    }
  printf ("\nSkipped over %d characters of white space \n\n", wscounter);
  printf
    ("Stopped scanning after %d characters (including the leading white space,\
     if any), last characters read that stopped the scan was a '%c' (0x%x), \
     which, for the real scanf, would be left in the keystroke buffer",\
     charcounter, characters, characters);
}
