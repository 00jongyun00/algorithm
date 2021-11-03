#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int N, M, i, pos1=0, pos2=0, pos3=0;

  scanf("%d", &N);
  vector<int> a(N);
  for (i=0; i<N; i++) scanf("%d", &a[i]);

  scanf("%d", &M);
  vector<int> b(M);
  for (i=0; i<M; i++) scanf("%d", &b[i]);

  vector<int> c(N+M);

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  while (pos1 < N && pos2 < M) {
    if (a[pos1] == b[pos2]) {
      c[pos3++] = a[pos1++];
      pos2++;
    } else if (a[pos1] < b[pos2]) pos1++;
    else pos2++;
  }

  for (i=0; i<pos3; i++) {
    printf("%d ", c[i]);
  }


  return 0;
}
