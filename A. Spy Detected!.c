#include <stdio.h>
int main () {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int a [101] = {0};
    int b [n+1], temp;
    for (int i = 1; i <=n; i++) {
      scanf("%d", &b[i]);
      a[b[i]]++;
    }
    for (int i = 1; ; i++) {
      if (a[i] == 1) {
      temp = i;
      break;
    }
    }
    int ans;
    for (int i = 1; ; i++) {
      if (b[i] == temp) {
        ans = i;
        break;
      }
    }
    printf("%d\n", ans);

}
}
