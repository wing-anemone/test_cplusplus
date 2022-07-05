#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> a = {};

int main(){
  sort(a.begin(),a.end(),[](const int &a,const int &b){return a<b;});
  for(auto i : a){
    cout << i << endl;
  }

  return 0;
}
