#include <iostream>
using std::cin;
using std::cout;

struct dataCoord{
  int x;
  int y;
};

void swap(int& a, int& b){
  int tmp = a;
  a = b;
  b = tmp;
}

int main(){
  int matrix[5][5], count = 0;
  dataCoord data;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin >> matrix[i][j];
      if(matrix[i][j] == 1){
        data.x = i;
        data.y = j;
      } 
    }
  }
  
  while (data.x != 2 || data.y != 2) {
    if (data.x < 2) {
      swap(matrix[data.x][data.y], matrix[data.x + 1][data.y]);
      data.x++;
    } else if (data.x > 2) {
      swap(matrix[data.x][data.y], matrix[data.x - 1][data.y]);
      data.x--;
    } else if (data.y < 2) {
      swap(matrix[data.x][data.y], matrix[data.x][data.y + 1]);
      data.y++;
    } else if (data.y > 2) {
      swap(matrix[data.x][data.y], matrix[data.x][data.y - 1]);
      data.y--;
    }
    count++;
  } 
  cout<<count;
}

