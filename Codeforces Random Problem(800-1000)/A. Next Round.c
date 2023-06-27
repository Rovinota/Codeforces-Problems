#include <stdio.h>
int main () {
  int n, k;
  scanf("%d%d", &n, &k);
  int c = 0, a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (a[k-1] <= a[i] && a[i] != 0)c++;
  }
  printf("%d\n", c);
}
