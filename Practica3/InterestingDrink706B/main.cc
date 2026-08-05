#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q, elem;
  cin >> n;
  vector<int> price(n);
  
  for(int i = 0; i < n; i++){
    cin >> elem;
    price.push_back(elem);
  }

  sort(price.begin(), price.end());

  while(q--){
    int x;
    cin >> x;
    int answer = upper_bound(price.begin(), price.end(), x) - price.begin();
    cout << answer << '\n';
  }


  return 0;
}
