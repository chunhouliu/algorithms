#include <cstdio>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))

int a[5000], b[5000], c[5000];

int main() {
  int n, x, an=0, bn=0, cn=0; 
  scanf("%d", &n);
  for(int i=1; i<=n; ++i) {
    scanf("%d", &x);
    if(x==1)a[an++]=i;
    else if(x==2) b[bn++]=i;
    else c[cn++]=i;
  }
  int cnt = MIN(an, MIN(bn, cn));
  printf("%d\n", cnt);
  for(int i=0; i<cnt; ++i) {
    printf("%d %d %d\n", a[i], b[i], c[i]);
  }
}