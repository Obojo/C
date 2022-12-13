/**What error messages will you get for the following program 
 * when you’re trying to compile it?
 */

void main()
{
printf (“Howdy, neighbor! This is my first C program.\n”);
return 0;
}


/**
ex_5.c: In function 'main':
ex_5.c:7:1: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
 printf (“Howdy, neighbor! This is my first C program.\n”);
 ^~~~~~
ex_5.c:7:1: warning: incompatible implicit declaration of built-in function 'printf'
ex_5.c:7:1: note: include '<stdio.h>' or provide a declaration of 'printf'
ex_5.c:7:9: error: stray '\342' in program
 printf (“Howdy, neighbor! This is my first C program.\n”);
         ^
ex_5.c:7:10: error: stray '\200' in program
 printf (“Howdy, neighbor! This is my first C program.\n”);
          ^
ex_5.c:7:11: error: stray '\234' in program
 printf (“Howdy, neighbor! This is my first C program.\n”);
           ^
ex_5.c:7:12: error: 'Howdy' undeclared (first use in this function)
 printf (“Howdy, neighbor! This is my first C program.\n”);
            ^~~~~
ex_5.c:7:12: note: each undeclared identifier is reported only once for each function it appears in
ex_5.c:7:19: error: 'neighbor' undeclared (first use in this function)
 printf (“Howdy, neighbor! This is my first C program.\n”);
                   ^~~~~~~~
ex_5.c:7:27: error: expected ')' before '!' token
 printf (“Howdy, neighbor! This is my first C program.\n”);
                           ^
ex_5.c:7:56: error: stray '\' in program
 printf (“Howdy, neighbor! This is my first C program.\n”);
                                                        ^
ex_5.c:7:58: error: stray '\342' in program
 printf (“Howdy, neighbor! This is my first C program.\n”);
                                                          ^
ex_5.c:7:59: error: stray '\200' in program
 printf (“Howdy, neighbor! This is my first C program.\n”);
                                                           ^
ex_5.c:7:60: error: stray '\235' in program
 printf (“Howdy, neighbor! This is my first C program.\n”);
                                                            ^
ex_5.c:8:8: warning: 'return' with a value, in function returning void
 return 0;
        ^
ex_5.c:5:6: note: declared here
 void main()
      ^~~~
*/
