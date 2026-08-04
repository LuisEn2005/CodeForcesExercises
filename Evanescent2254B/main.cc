#include <bits/stdc++.h>
using namespace std;

int compressStr(string s){
  int size = s.size();
  for(int i = 0; i < s.size() - 1; i++){
    if(s[i] == s[i+1]) size--;
  }
  return size;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, size, min;
  string s, ns;

  cin >> t;
  while(t--){
    cin >> size;
    cin >> s;
    min = s.size();
    for(int i = 1; i < s.size() - 1; i++){
      ns = s;
      ns.erase(i, 1);
      int comp = compressStr(ns);
      if(comp < min) min = comp; 
    }
    cout << min << '\n';
  }

  return 0;
}
