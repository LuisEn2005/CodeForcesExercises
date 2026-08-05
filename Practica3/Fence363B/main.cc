#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<long long> a(n + 1), pref(n + 1, 0);

  for(int i = 1; i <= n; ++i){
    cin >> a[i];
    pref[i] = pref[i - 1] + a[i];
  }

  auto sum = [&](int l, int r){
    return pref[r] - pref[l - 1];
  };

  int best = 1;
  
  long long bestSum = pref[k] - pref[0];

  for(int i = 2; i + k - 1 <= n; ++i){
    int r = i + k - 1;
    long long current = sum(i, r);
    if(current < bestSum){
      bestSum = current;
      best = i;
    }
  }
  
  cout << best << '\n';

  return 0;
}
