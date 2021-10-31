#include <stdio.h>

int main() {
  int a[101], n, i, j, tmp;
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  for (i=0; i<n; i++) {
    tmp = a[i];
    for (j=i-1; j>=0; j--) {
      // 자신보다 작은 값을 만날때 까지 계속 순회한다.
      if (a[j] > tmp) a[j+1] = a[j];
      else break;
    }
    a[j+1] = tmp;
  }

  for (i=0; i<n; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}

