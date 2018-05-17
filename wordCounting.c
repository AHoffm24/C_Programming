#include <stdio.h>
#define IN 1 //inside a Word
#define OUT 0 //outside a word;

//count lines and characters in input
main()
{
  printf("To stop counting type '~' into the command line\n");
  int c, nl, nw, nc,state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != '~'){
    ++nc;

    if(c == '\n')
      ++nl;

    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;

    else if (state == OUT){
      state = IN;
      ++nw;
    }

  }

  printf("%d %d %d\n", nl, nw, nc);
  return 0;
}
