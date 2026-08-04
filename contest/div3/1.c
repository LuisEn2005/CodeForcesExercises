#include <stdio.h>

int insertData(int* arr, int n) {
  int d, higher = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &d);
    arr[i] = d;
    if (d > higher) higher = d;
  }
  return higher;
}

void avg(int l, int r) {
}

int main() {
  int t, n;
  int arr[n];
  scanf("%d", &t);
  scanf("%d", &n);

  for (int i = 0; i < t; i++) {
    int h = insertData(arr, n);
    avg(l, );
  }

  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
}
