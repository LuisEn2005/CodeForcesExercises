#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  vector<pair<int,int>> Laptop(t);

  for(int i = 0; i < t; i++){
    cin >> Laptop[i].first >> Laptop[i].second;
  }

  sort(Laptop.begin(), Laptop.end());
  
  for(int i = 0; i < t - 1; i++){
    if(Laptop[i + 1].second < Laptop[i].second){
      cout << "Happy Alex" << '\n';
      return 0;
    }
  }
  cout << "Poor Alex" << '\n';
  return 0;
}
