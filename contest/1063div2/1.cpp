#include <cstdio>

void swap(int* arr, int i, int j) {
  int tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}

void sortArr(int* a, int n) {
  bool swapped;
  for (int i = 0; i < n; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a, i, j + 1);
        swapped = true;
      }
    }
    if (!swapped) break;
  }
}

void insertData(int* a, int n) {
  int num;
  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    a[i] = num;
  }
}

int main() {
  int t, n, a[n];
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    insertData(a, n);
    sortArr(a, n);

    if (n - 1 % 2 == 1) {
      for (int i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1])
          i++;
        else {
          printf("NO\n");
          break;
        }
      }
      printf("YES\n");
    } else {
      for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
          swap(a, i, i + 1);
        } else {
          i++;
        }
      }
    }
  }
}
