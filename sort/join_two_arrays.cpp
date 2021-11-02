#include <stdio.h>

int a[101], b[101], c[101];

int main() {
  int n, m, i, p1=1, p2=1, p3=1;

  scanf("%d", &n);
  for (i=1; i<=n; i++) {
    scanf("%d", &a[i]);
  }

  scanf("%d", &m);
  for (i=1; i<=m; i++) {
    scanf("%d", &b[i]);
  }

  while (p1 <= n && p2 <= m) {
    if (a[p1] <= b[p2]) {
      c[p3++] = a[p1++]; 
    } else {
      c[p3++] = b[p2++]; 
    }
  }
  
  while (p1<=n) c[p3++] = a[p1++];
  while (p2<=m) c[p3++] = b[p2++];

  for (i=1; i<p3; i++) {
    printf("%d ", c[i]);
  }

  return 0;
}
