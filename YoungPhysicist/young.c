#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void InitVect(int n, int** mat) {
  int num;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &num);
      mat[i][j] = num;
    }
  }
}

void getSum(int n, int** mat) {
  int sx = 0, sy = 0, sz = 0;
  for (int i = 0; i < n; i++) {
    sx += mat[i][0];
    sy += mat[i][1];
    sz += mat[i][2];
  }
  if (sx == 0 && sy == 0 && sz == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int** mat = NULL;
  mat = malloc(sizeof(int*) * n);
  for (int i = 0; i < n; i++) {
    mat[i] = malloc(sizeof(int) * 3);
  }
  InitVect(n, mat);
  getSum(n, mat);
  free(*mat);
  free(mat);
}
