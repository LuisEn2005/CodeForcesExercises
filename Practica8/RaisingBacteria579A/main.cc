#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int long long n;

  cin >> n;
  
  cout << __builtin_popcount((unsigned)n) << '\n';
  return 0;
}
