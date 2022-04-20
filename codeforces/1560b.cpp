#include <cstdio>
using namespace std;

#define ABS(a) ((a)<0?-(a):(a))

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int n = ABS(a-b);
    if(c>2*n || a>2*n || b>2*n) {
      printf("-1\n");
    } else {
      printf("%d\n", c>n?c-n:c+n);
    }
  }
}