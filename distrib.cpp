#include <iostream>
#include <random>
using namespace std;
int main() {

  mt19937 gen(random_device{}());
  uniform_int_distribution<> distrib(1, 6); //[1,6]闭区间

  for (int n = 0; n < 10; ++n)
    cout << distrib(gen) << ' ';
  cout << '\n';
  return 0;
}
