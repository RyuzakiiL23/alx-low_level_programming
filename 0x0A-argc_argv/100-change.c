#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*
*/

int main (int argc, char *argv[])
{
  int i = atoi(argv[1]);
  
if (i >= 25)
  {
    int i1 = i / 25;
    int i2 = i % 25;

    if (i2 >= 10)
    {
      int i3 = i2 / 10;
      int i4 = i2 % 10;

      if (i4 >= 5)
      {
        int i5 = i4 / 5;
        int i6 = i4 % 5;

        if (i6 >= 2)
        {
          int i7 = i6 / 2;
          int i8 = i6 % 2;
        }
      }
    }
    int toti = i1 + i3 + i5 + i7 + i8;

  }
if (i >= 10)
  {
    int j1 = i /10;
    int j2 = i % 10;

    if (j2 > 5)
    {
      int j3 = j2 / 5;
      int j4 = j2 % 5;

      if (j4 >= 2)
      {
        int j5 = j4 / 2;
        int j6 = j4 / 2;
      }
    }
    int totj = j1 + j3 +j5 + j6;

  }
if (i >= 5)
  {
    int k1 = i / 5;
    int k2 = i / 5;

    if (k2 >= 2)
    {
      int k3 = k2 / 2;
      int k4 = k2 % 2;
    }
    int totk = k1 + k3 +k4;
  }
if (i >= 2)
  {
    int l1 = i / 2;
    int l2 = i % 2;
  }
  int totl = l1 + l2;
  
  int result = totl + totk + totj + toti;

  printf("%d\n", result);
  return (0);
}
