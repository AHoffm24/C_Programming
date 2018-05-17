#include <stdio.h>

/*program is from the C programing exercise is language book by brian w, kernighan*/
//with symbolic constances
//the following are symbolic constants not variables.
//written in upper case so there is no semicolon at the end of a #define line 
#define LOWER 0     //lower limit of table
#define UPPER 300   //upper limit of table
#define STEP 20   // step size

int main()
{
  int far;
  for(far = LOWER; far <= UPPER; far = far + STEP)
    printf("%3d %6.1f\n", far, (5.0/9.0)*(far-32));
}



//without symbolic constance
/*
main()
{
  float far, cel;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;

  far = lower;
  while(far <= upper)
  {
    cel = (5.0/9.0) * (far -32.0);        //numbers will be right justified
    printf("%3.0f %6.1f\n", far, cel);//%6d, %3d idicate the width of numbers allowed. similar to setw(6), or setw(3) in c++
    far += step;        //the \t inputs a tab between argument 1 and argument 2
  }
}
*/
