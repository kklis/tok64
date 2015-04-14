#ifndef MAXLINE
   #define MAXLINE 200
#endif

char line [MAXLINE];

int getline2 (char *line, int max, FILE *infile)
{
   int i;

   if (fgets (line, max, infile) == NULL) i = EOF;
   else
   {
      i = strlen (line) - 1;
      if (line[i] == '\n') {
         if (line[i-1] == '\r') i--;
         line[i] = '\0';
      }
      else i++;
   }

   return i;
}
