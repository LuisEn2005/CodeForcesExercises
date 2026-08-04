#include <stdio.h>

int isLetter(char l, char* str) {
  for (int i = 0; str[i] != 0; i++) {
    if (l == str[i]) {
      str[i] = -1;
      return 1;
    }
  }
  return 0;
}

int cmpStr(char* str1, char* str2) {
  for (int i = 0; str1[i] != 0; i++) {
    if (isLetter(str1[i], str2) == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int q, t;
  scanf("%d", &q);
  for (int i = 0; i < q; i++) {
    scanf("%d", &t);
    char str1[t];
    char str2[t];
    scanf("%s", str1);
    scanf("%s", str2);
    if (cmpStr(str1, str2)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
