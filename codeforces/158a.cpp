#include <cstdio>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))

int main() {
  int n, k; scanf("%d%d", &n, &k);
  int pos_cnt=0, g_cnt = 0, d, kth;
  for(int i=1; i<=n; ++i) {
    scanf("%d", &d);
    if(d>0) ++pos_cnt;
    if(i<=k) ++g_cnt;
    if(i==k) kth = d;
    if(i>k && d == kth) ++g_cnt;
  }
  printf("%d", MIN(pos_cnt, g_cnt));
}