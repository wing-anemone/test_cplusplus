
#include <stdio.h>

void t(){
  int a = 2;
  if(a > 1){
    int &b = a;
    b--;
  }
  printf("%d\n",b);
}

int main(){

  return 0;
}
