#include <stdio.h>

void largest(int a, int b) {
  int i = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    i++;
  }
  printf("%d\n", i);
}

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  largest(a, b);
}
