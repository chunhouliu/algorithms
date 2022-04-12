#include <cstdio>
using namespace std;

#define MAX(a, b) ((a)<(b)?(b):(a))

int main() {
  int n, c=0, t=0, a, b;
  scanf("%d", &n);
  while(n>0) {
    scanf("%d%d", &a, &b);
    t += b - a;
    c=MAX(c, t);
    --n;
  }
  printf("%d",c);
}