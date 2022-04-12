#include <cstdio>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  int a, b, c, cnt = 0;
  for(int i=0; i<n; ++i) {
    scanf("%d%d%d", &a, &b, &c);
    if(a+b+c > 1) ++cnt;
  }
  printf("%d", cnt);
}