#include <iostream>
#include <google/dense_hash_map>

using namespace std;

template <typename T, typename S> T stoi(const S &s) {
  T t{};
  for (auto c : s) {
    if (!std::isdigit(c)) {
      return t;
    }
    t *= 10;
    t += c - '0';
  }
  return t;
}

google::dense_hash_set<MID> ids;

int main() {
  ids.set_empty_key(0);
  string str = "奔跑AU";
  if(
  stoi<uint64_t>(str)
  )
  return 0;
}
