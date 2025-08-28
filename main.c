#include "8051.h"
#include "pm133.h"

int main(void){
  int a = pmtest;

  int b, c;

  b = 3*a;
  c = pm133_test(a);
  c = b+a;
  pm133_print(c);
  
  return 0;
}
