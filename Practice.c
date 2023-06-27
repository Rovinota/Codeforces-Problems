#include <stdio.h>
float make_sum(float a, float b) {
  float sum = a + b;
  return sum;
}
int main () {
  int a = 6.5, b = 1.5;
  printf("%f", make_sum(a, b));
}
