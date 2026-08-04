#include <stdio.h>

int main() {
  int cases, n;
  scanf("%d", &cases);
  int nCandies[cases];
  for (int i = 0; i < cases; i++) {
    scanf("%d", &n);
    nCandies[i] = n;
  }
  int j = 0;
  for (int i = 0; i < cases; i++) {
    if (nCandies[i] % 3 == 0) {
      printf("0\n");
    } else {
      for (int j = 1; j < 3; j++) {
        nCandies[i]++;
        if (nCandies[i] % 3 == 0) {
          printf("%d\n", j);
          break;
        }
      }
    }
  }
}
