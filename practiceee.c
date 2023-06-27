#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char s[10000];
  scanf("%s", &s);
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 65 && s[i] <= 90) {
      s[i] += 32;
    }
  }
  char cham [] = "champions";
  int  isPresent = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        isPresent = 0;
        for (int j = 0; cham[j] != '\0'; j++) {
            if (s[i + j] != cham[j]) {
                isPresent = 0;
                break;
            }
            isPresent = 1;
        }
        if (isPresent) {
            break;
        }
    }

    if (isPresent) {
        printf("String contains substring.\n");
    } else {
        printf("String does not contain substring.\n");
    }
    return 0;



}
