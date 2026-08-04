#include <stdio.h>

int isVowel(char c, char* vowels) {
  for (int i = 0; vowels[i]; i++) {
    if (c == vowels[i]) return 1;
  }
  return 0;
}

void isConsonant(char c, int pos, char* newWord) {
  newWord[pos++] = '.';
  newWord[pos] = c;
}

int main() {
  char word[101], newWord[201];
  scanf("%s", word);
  int j = 0;
  for (int i = 0; word[i]; i++) {
    if (word[i] >= 'A' && word[i] <= 'Z') word[i] += 32;
    if (isVowel(word[i], "aoyeui"))
      continue;
    else {
      isConsonant(word[i], j, newWord);
      j += 2;
    }
  }
  newWord[j] = '\0';
  printf("%s\n", newWord);
}
