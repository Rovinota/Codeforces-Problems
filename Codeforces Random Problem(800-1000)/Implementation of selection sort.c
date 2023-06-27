#include <stdio.h>
#include <stdbool.h>
void swap (int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int min (int a, int b) {
  if (a < b ) return a;
  else        return b;
}
bool is_reverese_sorted(int n, int a[]) {
  int count = 0;
  for (int i = 0; i < n - 1; i++) {
           if (a[i] > a[i + 1]) {
            count++;
           }
       }
       if (count == n - 1) return true;
       else return false;
}
void sort (int n, int a[]) {
  for (int i = 0; i < n - 1; i++) {
    int minv = a[i]; int pos = i;
    for (int j = i; j < n; j++) {
      if (a[j] >  minv) {
        minv = a[j];
        pos = j;
      }
    }
    int temp = a[i];
    a[i] = a[pos];
    a[pos] = temp;
    if (is_reverese_sorted(n, a)) break;
  }
}
int main () {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(n, a);
  for (int i = 0; i < n ; i++) {
    printf("%d ", a[i]);
  }


}

