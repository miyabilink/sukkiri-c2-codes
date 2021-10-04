#include <stdio.h>

int main(void)
{
  int tax = 110;  // 税率を整数で表現
  int fax = 50000;
  printf("50000円から40000円に値下げします\n");
  tax = 40000;    /* NG！代入すべき変数はfax */
  printf("FAXの新価格（税込）: %d円\n", fax * tax / 100);
  return 0;
}
