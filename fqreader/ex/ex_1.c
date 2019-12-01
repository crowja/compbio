#include <stdlib.h>
#include <stdio.h>
#include "fqreader.h"

int
main(int argc, char *argv[])
{
   char       *h1, *h2, *s, *t;
   struct fqreader *r = fqreader_new(NULL);

   while (fqreader_next(r, &h1, &h2, &s, &t)) {
      printf("@%s\n", h1);
      printf("%s\n", s);
      printf("+%s\n", h2);
      printf("%s\n", t);
   }

   fqreader_free(r);
   return 0;
}
