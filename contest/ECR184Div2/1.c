#include <stdio.h>

void insertArr(int* v, int size) {
  int n, i = 0;
  while (size--) {
    scanf("%d", &n);
    v[i] = n;
    i++;
  }
}

int main() {
  int t, n, a, v[300000];
  scanf("%d", &t);
  while (t--) {
    int b = 0;
    scanf("%d", &n);
    scanf("%d", &a);
    insertArr(v, n);
    int i = 0;
    int size = n;
    while (n--) {
      int num = a - v[i];
      if (num <= 0) {
        b = v[i] + num;
        if (i < size / 2)
          b++;
        else
          b--;
        break;
      }
      i++;
    }
    if (b == 0) {
      b = a + 1;
    }
    printf("%d\n", b);
  }
}
