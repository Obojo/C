/**
 * What warning or error messages, if any, will you get when you’re
 * compiling the following program?
 */

#include <stdlib.h>
#include <stdio.h>

main()
{
	printf (“Howdy, neighbor! This is my first C program.\n”);
	exit(0);
}

/**
 ex_3.c:9:1: warning: return type defaults to 'int' [-Wimplicit-int]
 main()
 ^~~~
ex_3.c: In function 'main':
ex_3.c:11:10: error: stray '\342' in program
  printf (“Howdy, neighbor! This is my first C program.\n”);
          ^
ex_3.c:11:11: error: stray '\200' in program
  printf (“Howdy, neighbor! This is my first C program.\n”);
           ^
ex_3.c:11:12: error: stray '\234' in program
  printf (“Howdy, neighbor! This is my first C program.\n”);
            ^
ex_3.c:11:13: error: 'Howdy' undeclared (first use in this function)
  printf (“Howdy, neighbor! This is my first C program.\n”);
             ^~~~~
ex_3.c:11:13: note: each undeclared identifier is reported only once for each function it appears in
ex_3.c:11:20: error: 'neighbor' undeclared (first use in this function)
  printf (“Howdy, neighbor! This is my first C program.\n”);
                    ^~~~~~~~
ex_3.c:11:28: error: expected ')' before '!' token
  printf (“Howdy, neighbor! This is my first C program.\n”);
                            ^
ex_3.c:11:57: error: stray '\' in program
  printf (“Howdy, neighbor! This is my first C program.\n”);
                                                         ^
ex_3.c:11:59: error: stray '\342' in program
  printf (“Howdy, neighbor! This is my first C program.\n”);
                                                           ^
ex_3.c:11:60: error: stray '\200' in program
  printf (“Howdy, neighbor! This is my first C program.\n”);
                                                            ^
ex_3.c:11:61: error: stray '\235' in program
  printf (“Howdy, neighbor! This is my first C program.\n”);
                                                             ^
*/
