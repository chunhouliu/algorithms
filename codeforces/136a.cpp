#include <cstdio>
using namespace std;

int g[1000] = {0};

int main() {
  int n, x; scanf("%d", &n);
  for(int i=1; i<=n; ++i) {
    scanf("%d", &x);
    g[x-1] = i;
  }
  for(int i=0; i<n; ++i) printf("%d ", g[i]);
}