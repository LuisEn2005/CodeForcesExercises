#include <iostream>

using std::cin;
using std::cout;
using std::string;

string sum;
char lookFor[3] = {'1', '2', '3'};

void swapChars(char &a, char &b) {
  char tmp = a;
  a = b;
  b = tmp;
}

int main() {
  cin >> sum;
  int auxIdx = 0;
  int i, newi = 0;
  for (int j = 0; j < 3; j++) {
    for (i = newi; i < sum.size(); i += 2) {
      if (sum[i] == lookFor[j]) {
        swapChars(sum[i], sum[auxIdx]);
        auxIdx += 2;
      }
    }
    newi = auxIdx;
  }

  cout << sum;
}
