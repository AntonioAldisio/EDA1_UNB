#include <stdio.h>
#include <string.h>

void inverso(char*, int, int);

int main(){

   char entrada[500];
   int inicio = 0;


   gets(entrada);
   int final = strlen(entrada)-1;

   inverso(entrada, inicio, final);

   printf("%s\n", entrada);

   return 0;
}

void inverso(char *x, int inicio, int final)
{
   char c;

   if (inicio >= final)
      return;

   c = *(x+inicio);
   *(x+inicio) = *(x+final);
   *(x+final)   = c;

   inverso(x, ++inicio, --final);
}