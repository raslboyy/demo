#include <bubble_sort.hpp>

void BubbleSort(std::vector<int> &a) {
  auto n = a.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[i]) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = a[i];
      }
    }
  }
}