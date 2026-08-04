#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  string name;
  cin >> t;
  while(t--){
    cin >> name;
    if(name.length() > 10){
      cout << name.front() << name.length() - 2 << name.back() << '\n';
    }
    else{
      cout << name << '\n'; 
    }
  }

  return 0;
}
