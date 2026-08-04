#include <stdio.h>

int main(){
  int t, n, list[7];
  if(scanf("%d", &t) != 1) return 0;

  while(t--){
    int sum = 0, mayor;
    if(scanf("%d", &n) != 1) return 0;
    mayor = n;
    sum += n * (-1);

    for(int i = 0; i < 6; i++){
      if(scanf("%d", &n) != 1) return 0;
      if(n > mayor) mayor = n;
      sum += n *(-1);
    }
    sum += 2 * mayor;

    printf("%d\n", sum);
  }
}
