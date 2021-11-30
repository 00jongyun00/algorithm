#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, min, pivot, max, result, count = 1;
	scanf("%d %d", &n, &m);	
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		a[i] = temp;
		max += temp;
	}
	min = 1;
	pivot = (min + max) / 2;

	while (min <= max) {
		result = 1;
		int accu = 0;
		for (int i = 0; i < n; i++) {
			accu += a[i];
			if (accu > pivot) result++;
		}
		if (result <= m) {
			result = pivot;
			min = pivot + 1;
		} else max = pivot - 1;
		pivot = (min + max) / 2;
	}

	printf("%d", result);
}