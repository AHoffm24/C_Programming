#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct tnode {  /*tree */
  char *word; //points to the text
  int count; // number of occurrences
  struct tnode *left; //left child
  struct tnode *right;  //right child

//when using struct tnode inside of itself, it must always be a pointer
};

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
void ungetch(int);
int getword(char *, int);
int getch(void);

// word frequence count

int main()
{
  struct tnode *root;
  char word[MAXWORD];

  root = NULL;
  while(getword(word, MAXWORD) != EOF)
      if (isalpha(word[0]))
          root = addtree(root, word);
  treeprint(root);
  return 0;

}



struct tnode*talloc(void);
char *strdup(char *);
//add ree = add a node with w at or below p
struct tnode *addtree(struct tnode *p, char *w)
{
      int cond;

      if (p == NULL){   //new word arrived;
        p = talloc(); //makes new node;
        p->word = strdup(w);
        p->count = 1;
        p->left = p->right = NULL;
      }
      else if((cond = strcmp(w, p->word)) == 0)
          p->count++; //repeated word
      else if (cond < 0) //less than into left subtree
          p->left = addtree(p->left, w);
      else
        p->right = addtree(p->right, w);
        return p;
}


int getword(char * word, int lim)
{
    int c, getch(void);
    void ungetch(int);
    char *w = word;

    while(isspace(c = getch()));
    if (c != EOF)
        *w++ = c;
    if (!isalpha(c))
    {
      *w = '\0';
      return c;
    }
    for( ; --lim > 0; w++)
        if (!isalnum(*w = getch()))
        {
          ungetch(*w);
          break;
        }
    *w = '\0';
    return word[0];

}


void treeprint(struct tnode *p)
{
  if(p != NULL)
  {
    treeprint(p->left);
    printf("%4d %s\n", p->count, p->word);
    treeprint(p->right);
  }
}
