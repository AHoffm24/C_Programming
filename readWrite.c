#include <stdio.h>

int main()
{
  int c;
  //shorter way

  printf("%d", EOF);
  printf(" = EOF Character\n" );
  while ((c = getchar())!= EOF)
    putchar(c);

  /*
  c = getchar();
  while(c != EOF)
  {
    putchar(c);
    c = getchar();
  }
  */
}
