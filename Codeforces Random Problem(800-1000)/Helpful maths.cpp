#include <stdio.h>
#include <string.h>
int main () {
  char s [101];
  scanf("%s", &s);
  // printf("%s", s);
  int d = strlen(s);
  for (int i = 0; i < d - 2; i += 2) {
    for (int j = i + 2; j < d; j += 2) {
      int d1 = s[i] - '0';
      int d2 = s[j] - '0';
      if (d1 > d2) {
        char temp = s[i];
        s [i] = s[j];
        s[j] = temp;
      }
    }
  }
  printf("%s", s);

}

