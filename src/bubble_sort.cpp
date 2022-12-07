#include <bubble_sort.hpp>

void BubbleSort(std::vector<int> &a) {
  auto n = static_cast<int>(a.size());
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[i]) {
        std::swap(a[i], a[j]);
      }
    }
  }
}