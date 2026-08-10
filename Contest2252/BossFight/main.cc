#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, elem, maxSum = 0, maxElem = 0, maxCountVec = 0, repMax = 0;
  cin >> t;

  while(t--){
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
      cin >> elem;
      a[i] = elem;
      maxSum += elem;
      if(maxElem < elem) maxElem = elem;
    }
 
    vector<int> countVec(maxElem, 0);

    for(int i = 0; i < n; i++) countVec[a[i]-1]++;
    
    for(int i = 0; i < maxElem; i++){
      if(countVec[i] > maxCountVec){
        maxCountVec = countVec[i];
        repMax = i + 1;
      }
    }

    for(int i = 0; i < maxElem && countVec[i] != 0;i++){
      if(repMax - 1 != i  && countVec[i] != maxCountVec) maxCountVec -= countVec[i];
    }
    
    maxSum = maxSum - repMax * (maxCountVec - 2);
    cout << maxSum << '\n';
    maxCountVec = 0; repMax = 0;
  }


  return 0;
}
