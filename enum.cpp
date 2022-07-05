#include <stdio.h>
enum scode{
  T = 0,
  TT = 1
};

int main(){
  scode a;
  a = T;
  printf("%u \n",a);

  return 0;
}
