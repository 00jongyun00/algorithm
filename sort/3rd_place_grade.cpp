#include <stdio.h>

int main() {
    int a[101], n, i, j, cnt = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        int idx = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[idx]) idx = j;
        }
        int swap = a[i];
        a[i] = a[idx];
        a[idx] = swap;
    }
    for (i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) cnt++;
        if (cnt == 3) {
            printf("%d", a[i]);
            break;
        }
    }
    return 0;
}
