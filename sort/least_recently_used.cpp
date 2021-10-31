#include <stdio.h>

int main() {
  int c[100];
  int s, n, a, i, j, pos;
  scanf("%d %d", &s, &n);
  for (i=0; i<n; i++) {
    scanf("%d", &a);
    pos = -1;
    for (j=0; j<s; j++) {
      if (c[j] == a) pos =j;
    }

    // cahce miss
    if (pos == -1) {
      for (j=s-1; j>=1; j--) {
        c[j] = c[j-1];
      }
      c[0] = a;
    // cahce heat
    } else {
      for (j=pos; j>=1; j--) {
        c[j] = c[j-1];
      }
      c[0] = a;
    }
  }

  for (i=0; i<s; i++) {
    printf("%d ", c[i]);
  }
}
