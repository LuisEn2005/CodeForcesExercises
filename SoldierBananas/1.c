#include <stdio.h>

int main() {
  int k, n, w;

  scanf("%d", &k);
  scanf("%d", &n);
  scanf("%d", &w);
  int sum = 0;
  for (int i = 1; i < w + 1; i++) {
    sum += i * k;
  }
  if (sum <= n)
    printf("0\n");
  else
    printf("%d\n", sum - n);
}
