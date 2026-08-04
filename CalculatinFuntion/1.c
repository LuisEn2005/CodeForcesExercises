#include <stdio.h>

int main() {
  long long n;
  scanf("%lld", &n);
  long long div = n / 2;
  if (n % 2 == 0) {
    printf("%lld\n", div);
  } else {
    printf("%lld\n", (div + 1) * -1);
  }
}
