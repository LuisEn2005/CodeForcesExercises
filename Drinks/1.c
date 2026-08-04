#include <stdio.h>

int main() {
  int n, p;
  double ans = 0.0, sum = 0.0;
  scanf("%d", &n);
  int drinks = n;

  while (n--) {
    scanf("%d", &p);
    sum += p;
  }

  ans = sum / drinks;

  printf("%.12lf", ans);
}
