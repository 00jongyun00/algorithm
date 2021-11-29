#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int n, m, left, right, pivot, cnt, result;
    scanf("%d %d", &n, &m);
    vector<int> a(n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a.begin(), a.end());
    left = 1;
    right = a[a.size() - 1];

    while (left <= right) {
        pivot = (left + right) / 2;
        cnt = 1;
        int current = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] - current >= pivot) {
                current = a[i];
                cnt++;
            }
        }
        if (cnt >= m) {
            left = pivot + 1;
            result = pivot;
        }
        else right = pivot - 1;
    }
    printf("answer : %d", result);
    return 0;
}