#include <cstdio>
using namespace std;

int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  int c = 0, t=0;
  for(int i=1; i<=n && t+5*i+k<=240; ++i) {
    ++c; t+=5*i;
  }
  printf("%d", c);
}