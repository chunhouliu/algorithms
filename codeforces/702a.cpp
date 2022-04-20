#include <cstdio>
using namespace std;

#define MAX(a, b) ((a)<(b)?(b):(a))

int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  int x, l=1;
  scanf("%d", &x);
  int y = x, s=1;
  for(int i=1; i<n; ++i) {
    scanf("%d", &x);
    if(x>y) {
      ++s;
      l=MAX(l, s);
    } else {
      s = 1;
    }
    y = x;
  }
  printf("%d", l);
}