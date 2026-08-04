#include <stdio.h>

int isStr(char* source, int n, char c) {
  int i = 0;
  while (source) {
    if (source[i] == c && i < n) {
      i++;
    }
    if (source[i] == 'a')
  }
  return i;
}

int removeChars(char* s) {
  int a = 0, b = 0, i = 0;
  while (s) {
    if (s[i] == 'a') {
      a++;
    } else if (s[i] == 'b') {
      b++;
    }
    i++;
  }

  if (a == b) {
    return 0;
  } else if (a < b) {
    b -= a;
    i = isStr(s, b, 'b');
    return i;
  } else if (b < a) {
    a -= b;
    i = isStr(s, a, 'a');
    return i;
  }
  return -1;
}

int main() {
  int t, n;
  scanf("%d", &t);
  int arr[t];
  for (int i = 0; i < t; i++) {
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    arr[i] = removeChars(s);
  }
}
