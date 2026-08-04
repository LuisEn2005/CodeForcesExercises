#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int s, n;

  cin >> s;
  cin >> n;
  vector<pair<int, int>> Dragon(n);
  
  for(int i = 0; i < n; i++){
    cin >> Dragon[i].first >> Dragon[i].second;
  }

  sort(Dragon.rbegin(), Dragon.rend());
  
  for(int i = 0; i < n; i++){
    if(s > Dragon[i].first) s += Dragon[i].second;
    else{cout << "NO" << '\n'; return 0;}
  }
  cout << "YES" << '\n';
  return 0;
}
