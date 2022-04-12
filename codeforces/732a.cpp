#include <cstdio>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))

int main() {
  int k, r; scanf("%d%d", &k, &r);
  int m = 10;
  for(int i=1; i<10; ++i) {
    int x = k*i%10;
    if(x==r || x==0) {
      m = i;break;
    }
  }
  printf("%d", m);
}