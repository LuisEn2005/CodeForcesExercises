#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t, a, b, c, higher, higher2;
  cin >> t;

  while(t--){
    cin >> a;
    cin >> b;
    cin >> c;
    
    higher = max({a,b,c});
    
    if(higher == a) higher2 = max(b,c);
    else if(higher == b) higher2 = max(a,c);
    else if(higher == c) higher2 = max(a,b);
    
    cout << higher - higher2 << '\n';
  }

  return 0;
}
