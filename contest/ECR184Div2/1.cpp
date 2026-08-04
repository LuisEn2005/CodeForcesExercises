#include <iostream>

int getBob(int n, int a) {
  int v, b;
  for (int i = 0; i < n; i++) {
    scanf("%d", &v);
    if (a >= v) {
      if (i < n / 2) {
        b = a + 1;
      } else {
        b = a - 1;
      }
    }
    return b;
  }
  return b;
}

int main() {
  int t, n, a, b;
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    scanf("%d", &a);
    b = getBob(n, a);
    printf("%d\n", b);
  }
}
