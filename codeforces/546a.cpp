#include <cstdio>
using namespace std;

int main() {
  int k, n, w; scanf("%d%d%d", &k, &n, &w);
  int t = ((k + w*k) * w)>>1;
  printf("%d", (t>n)?t-n:0);
}