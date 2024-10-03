#include <stdio.h>

int main(void)
{
  printf("START");
  int z = 0;
  int a = 100 / z;    /* わざとゼロで割り、異常を発生させる */
  printf("FINISH");
  return 0;
}