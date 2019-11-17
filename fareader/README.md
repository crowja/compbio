# fareader

Read a file or stream of sequences in FASTA format:

    struct fareader *r = fareader_new(NULL); /* from stdin */
    char       *h, *s;
     . . .
    while (fareader_next(r, &h, &s)) {
       printf("seq is %s\n", s);
    }
     . . .
    fareader_free(r);

Input can be from stdin or from a file. And in either case the input can be gzip
compressed, so there is no need to uncompress a file or stream explicitly before
using it. This is thanks to the magical magic of **zlib** http://zlib.net of
Jean-Loup Gailly and Mark Adler.
