#include <bits/stdc++.h>
using namespace std;

int n, elem, c25 = 0, c50 = 0;
bool itCant = false;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  while(n--){
    cin >> elem;
    if((elem == 50 && c25 == 0) || (elem == 100 && (c25 <= 2 && c50 == 0 || c50 >= 1 && c25 == 0))) itCant = true; break;
    
    if(elem == 25) c25++;
    else if(elem == 50) {
      c50++; c25--;
    }
    else if(elem == 100){
      if(c50 > 0){
        c50--; c25--;
      }
      else{c25 -= 3;}
    }
  }

  if(itCant == true) cout << "NO" << '\n';
  else cout << "YES" << '\n';
  
  return 0;
}
