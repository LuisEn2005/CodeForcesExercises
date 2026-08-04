#include <stdio.h>

int main() {
  int t, n, m, flag;
  int v;

  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    scanf("%d", &m);
    flag = 0;
    for (int i = 0; i < m; i++) {
      scanf("%d", &v);
      if (i && v == 1) flag = 1;
    }
    if (flag)
      printf("1\n");
    else
      printf("%d\n", n - (v - 1));
  }
  return 0;
}
