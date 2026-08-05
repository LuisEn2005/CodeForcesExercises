#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, mine = 0, total = 0, coins = 0;
  vector<int> a;
  
  cin >> t; 

  for(int i = 0; i < t; i++){
    cin >> n;
    a.push_back(n);
    total += n;
  }
  sort(a.rbegin(), a.rend());
  for(int i = 0; i < t; i++){
    if(mine > total - mine) break;
    mine += a[i];
    coins++;
  }
  cout << coins << '\n';
  return 0;
}
