#include <stdio.h>

int main() {
  int t;
  char s[101];
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    scanf("%s", s);
    int count = 0;
    char target = s[n - 1];

    for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] != target) count++;
    }

    printf("%d\n", count);
  }
}
