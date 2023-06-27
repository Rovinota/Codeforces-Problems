// find max value
// declare array of size maxvalue+1
// frequency count
// cumamilative sum ber kora
// Magic part

#include <stdio.h>
int main () {
  int n;
  scanf ("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]); //  2 2 3 3 4 4 5 1 1
  }
  int maxVal = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > maxVal) {
      maxVal = a[i];
    }
  }
  int countArry [maxVal+1];
  for (int i = 0; i <= maxVal; i++) {
    countArry [i] = 0;
  }
  for (int i = 0; i < n; i++) {
    countArry[a[i]]++;  // 0 2 2 2 2 1
  }
  for (int i = 1; i <= maxVal; i++) {
    countArry[i] = countArry[i] + countArry[i-1]; // 0 0 4 6 7 8
  }
  int answer[n];   // Main Array : 2 2 3 3 4 4 5 1 1
  for (int i = n-1; i >= 0; i--) {
    countArry[a[i]] = countArry[a[i]] - 1;
    answer[countArry[a[i]]] = a[i]; //  1 1 2 2 3 3 4 4 5
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", answer[i]);
  }


}
