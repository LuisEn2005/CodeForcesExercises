#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, k, sum = 0, min = 0, idx = 1, elem;
  
  cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> elem;
    a[i] = elem;
  }

  int j = 0;
  for(int i = 0; i < n; ++i){
    sum += a[i];

    if(i == k - 1){
      min = sum;
    }
    else if(i >= k){
      sum -= a[j++];
      if(sum < min){
        min = sum;
        idx = j + 1;
      }
    }
  }

  cout << idx << '\n';
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}
