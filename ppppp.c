#include <stdio.h>

struct person {
  int age;
  float wight;
  char name[100];
};
int main () {
//  int x = 5;
//  int *p = &x;
//  printf("%d", *p);
  struct person tanvir;
  tanvir.age = 20;
  tanvir.wight = 60;
  strcpy(tanvir.name, "Tanvir");
  struct person *p = &tanvir;
  printf("%d %f %s", p->age, p->wight, p->name);

}
