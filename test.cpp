#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> slots{1, 2, 3, 4, 5};
  slots.insert(std::next(std::begin(slots), 2), 444);
  for (auto it = std::begin(slots) + 2 + 1; it != std::end(slots); ++it) {
    if ((*it) == 444) {
      std::swap(*it, *(it - 1));
      /* if (*(it) == 444) { */
      /* } */
    }
  }
  /* slots.insert(slots.begin(), 3, 4444); */
  for (auto slot : slots) {
    cout << slot << endl;
  }

  return 0;
}
