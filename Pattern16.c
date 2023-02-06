#include <stdio.h>
/*
Similarly Print this Pattern
\ * * * * * * /
* \ * * * * / *
* * \ * * / * *
* * * * / * * *
* * / * * \ * *

*/
int
main ()
{
  int i, j;
  for (int i = 1; i <= 7; i++)
    {
      for (int j = 1; j <= 7; j++)
	{
	  if (j == i || j == 8 - i)
	    {
	      if (i == j)
		printf ("\\");	// Backslash
	      else
		printf ("/");	//forward slash

	      //

	    }
	  else

	    printf ("*");

	}
      printf ("\n");
    }

  return 0;
}
