#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, sum, counter = 0;
  vector<int> v(3);
  cin >> t;

  while(t--){
    sum = 0;
    cin >> n; sum += n;
    cin >> n; sum += n;
    cin >> n; sum += n;
    if(sum >= 2) counter++;
  }
  cout << counter << '\n';

  return 0;
}
