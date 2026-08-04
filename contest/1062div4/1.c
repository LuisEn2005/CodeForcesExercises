#include <stdio.h>

int main() {
  int t, a, b, c, d;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if (a == b && a == c && a == d) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
