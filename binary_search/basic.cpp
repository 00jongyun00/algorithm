#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, target, left, right, pivot;
  scanf("%d %d", &n, &target);
  vector<int> arr(n);
  left = 0;
  right = n-1;
  pivot = (left + right) / 2;

  for (int i=0; i<n; i++) scanf("%d", &arr[i]);

  sort(arr.begin(), arr.end());

  while (left <= right) {
    if (arr[pivot] == target) {
      printf("%d", pivot + 1);
      break;
    }
    if (arr[pivot] < target) left = pivot + 1;
    else right = pivot - 1;
    pivot = (left + right) / 2;
  }
  return 0;
}

