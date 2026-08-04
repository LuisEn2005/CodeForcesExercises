#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
      int r = n % 4;
      int q = (n - r) / 4;
      q++;
      printf("%d\n", q);
    } else
      printf("0\n");
  }
  return 0;
}
