#include <stdio.h>
/*sample program on functions. Creating Eponent calculator.
This calculator can do any exponent which are integers,
positive only 0 - 9
*/
int  power(int, int); //n = number, e = exponent


int main()
{
  int ex;
  int num;
  printf("enter a number, and then the exponent to which you would like solved\n");


  num = (getchar() - '0');
  ex = (getchar() - '0');
  int number;
  number = power(num, ex);
  printf("%d\n", number);
  return 0;
}

int power(int num, int ex)
{
  int og;
  og = num;
  if(ex == 0)
    return 1;
  else if(ex == 1)
    return num;
  else
    for(int i = 2; i <= ex; ++i)
    {
        num = og * num;
    }
  return num;
}
