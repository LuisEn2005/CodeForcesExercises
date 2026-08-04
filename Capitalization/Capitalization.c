#include <stdio.h>

void capitalize(char* word) {
  char* newWord;
  if (word[0] == 0)
    return;
  else {
    if (word[0] >= 'a' && word[0] <= 'z') {
      word[0] -= 32;
      newWord = word;
    } else {
      newWord = word;
    }
  }
  printf("%s", newWord);
}

int main() {
  char word[1000];
  scanf("%s", word);
  capitalize(word);
}
