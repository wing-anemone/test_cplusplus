

#include <iostream>
using namespace std;

class A {
public:
  int a = 0;
  A *ptr = nullptr;
};

int main() {
  A *p1 = new A();
  A **p2 = &p1;

  //(*p2)->a = 20; // 需要加括号，不然优先级有问题
  *p2->a = 20;
  //cout << *p1.a << endl;

  return 0;
}
