#include <bits/stdc++.h>
using namespace std;

int t;
int long long a, b, c, low, mid, high, ans;
vector<int long long> nums(3);

void setNums(){
  cin >> a; nums[0] = a;
  cin >> b; nums[1] = b;
  cin >> c; nums[2] = c;
  low = min({a,b,c});
  high = max({a,b,c});
  mid = a + b + c - (low + high);
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    
  cin >> t;
  while(t--){
    setNums();

    if(low + mid >= high) ans = high - low;
    else{
      ans = mid;
    }

    cout << ans << '\n';
  }
  return 0;
}
