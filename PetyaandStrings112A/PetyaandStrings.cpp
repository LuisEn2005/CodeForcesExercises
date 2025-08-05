#include <iostream>

using std::cin;
using std::cout;
std::string str1;
std::string str2;

void lowerstr(std::string& str){
  for(int i = 0; i < str.size(); i++){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      int n = (int)str[i] + 32;
      str[i] = n;
    }
  }
}

int compare(std::string str1, std::string str2){
  int cmp;
  for(int i = 0; i < str1.size(); i++){
    if(str1[i] < str2[i]){
      cmp = -1;
      break;
    }
    if(str1[i] > str2[i]) {
      cmp = 1;
      break;
    }
    if(str1[i] == str2[i]) {
      cmp = 0; 
    }
  }
  return cmp;
}

int main(){
  cin >> str1;
  cin >> str2;

  lowerstr(str1);
  lowerstr(str2);
  if(str1.size() == str2.size()) cout << compare(str1, str2);
}
