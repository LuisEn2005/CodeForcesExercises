#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int size = n;

    long long a[200000];
    int i = 0;
    while (n--) {
      int num;
      scanf("%d", &num);
      a[i] = num;
      if (a[i] == -1 && (i && i != size - 1)) a[i] = 0;
      i++;
    }
    i = 0;
    long long sub = 0;

    if (a[0] == -1 && a[size - 1] == -1) {
      a[0] = 0;
      a[size - 1] = 0;
    } else if (a[0] == -1) {
      a[0] = a[size - 1];
    } else if (a[size - 1] == -1) {
      a[size - 1] = a[0];
    }

    sub = a[size - 1] - a[0];
    if (sub < 0) sub *= -1;
    printf("%lld\n", sub);
    while (i < size)
      printf("%lld ", a[i++]);
    printf("\n");
  }
}
