#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* std::vector<int> v(3); */
  /* std::cout << v.size() << std::endl; */
  //创建一个vector,置入字母表的前十个字符
  vector<int> avec;
  for (int i = 0; i < 10; i++)
    avec.push_back(i);

  //插入四个C到vector中
  avec.insert(avec.begin() + 10, 233);
  /* if (avec.size() > 4) { */
    avec.resize(20);
  /* } */

  for (auto i : avec) {
    cout << i << endl;
  }

  return 0;
}
