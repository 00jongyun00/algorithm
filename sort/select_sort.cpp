#include <stdio.h>

int main() {
    int a[100], n, idx, swap;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[idx]) idx = j;
        }
        swap = a[i];
        a[i] = a[idx];
        a[idx] = swap;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
