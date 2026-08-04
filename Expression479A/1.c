#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int result1 = a + b * c;
  int result2 = a * (b + c);
  int result3 = a * b * c;
  int result4 = (a + b) * c;
  int result5 = a + b + c;
  int result6 = a * b + c;

  int higher = result1;
  if (result2 > higher) higher = result2;
  if (result3 > higher) higher = result3;
  if (result4 > higher) higher = result4;
  if (result5 > higher) higher = result5;
  if (result6 > higher) higher = result6;

  printf("%d\n", higher);
}
