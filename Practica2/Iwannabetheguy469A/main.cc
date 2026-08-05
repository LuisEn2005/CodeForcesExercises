#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, p, q, l, counter = 1;
  set<int> levels;
  
  cin >> n;

  cin >> p;
  
  for(int i = 0; i < p; i++){
    cin >> l;
    levels.insert(l);
  }
  
  cin >> q;

  for(int i = 0; i < q; i++){
    cin >> l;
    levels.insert(l);
  }
  
  for(int i : levels){
    if(counter != i){
      cout << "Oh, my keyboard!" << '\n';
      return 0;
    }
    counter++;
  }

  if(levels.empty() || *levels.rbegin() != n){
    cout << "Oh, my keyboard!" << '\n';
    return 0;
  }

  cout << "I become the guy." << '\n';
  return 0;
}
