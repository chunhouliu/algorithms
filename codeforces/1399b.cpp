#include <cstdio>
using namespace std;

#define MIN(x, y) ((x)<(y)?(x):(y))
#define MAX(x, y) ((x)<(y)?(y):(x))

typedef unsigned long long ULL;

ULL a[100], b[100];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; ++i) scanf("%llu", &a[i]);
    for(int i=0; i<n; ++i) scanf("%llu", &b[i]);
    
    ULL ta=a[0], tb=b[0];
    for(int i=1; i<n; ++i) {
      ta=MIN(ta, a[i]);
      tb=MIN(tb, b[i]);
    }
    ULL s = 0;
    for(int i=0; i<n; ++i) {
      s += MAX(a[i]-ta, b[i]-tb);
    }
    printf("%llu\n", s);
  }
}