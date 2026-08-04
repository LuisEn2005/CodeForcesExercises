#include <stdio.h>

int main() {
  int k, m, l, n, d, counter = 0;
  scanf("%d %d %d %d %d", &k, &m, &l, &n, &d);
  for (int i = 1; i < d + 1; i++) {
    if (i % k == 0 || i % m == 0 || i % l == 0 || i % n == 0) counter++;
  }
  printf("%d\n", counter);
}
