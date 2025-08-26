#include "8051.h"
#include "pm133.h"

int main(void){
  int a = pmtest;

  int b, c, d;

  b = 2*a;
  c = pm133_test(a);
  c = b+a;
  return 0;
}
