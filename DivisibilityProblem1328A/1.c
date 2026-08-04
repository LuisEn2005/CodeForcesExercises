#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int count = 0;
    int a, b;
    scanf("%d %d", &a, &b);
    if (b >= a) {
      printf("%d\n", b - a);
    } else if (a % b == 0) {
      printf("0\n");
    } else {
      int ans = (b * ((a / b) + 1)) - a;
      printf("%d\n", ans);
    }
  }
  return 0;
}
