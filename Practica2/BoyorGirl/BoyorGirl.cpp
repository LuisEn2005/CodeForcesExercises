#include <iostream>

using std::cin;
using std::cout;
using std::string;

string name;
char arrname[100]; // w
int idx = 1;

int main() {
  cin >> name;
  int sizename = name.size();
  for (int i = 0; i < name.size(); i++) {
    for (int j = 0; j < idx; j++) {
      if (name[i] == arrname[j]) {
        sizename--;
        break;
      }
    }
    arrname[i] = name[i];
    idx++;
  }
  if (sizename % 2 == 1) {
    cout << "IGNORE HIM!";
  } else {
    cout << "CHAT WITH HER!";
  }
  return 0;
}
