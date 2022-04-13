#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

int a[100], b[100];

int main(int argc, char* argv[]) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; ++i) scanf("%d", &a[i]);
    for(int i=0; i<n; ++i) scanf("%d", &b[i]);
    sort(a, a+n);
    sort(b, b+n, greater<int>());
    int s = 0;
    for(int i=0; i<n; ++i) {
      if(k>0 && b[i]>a[i]) {
        --k; s += b[i];
      } else s+=a[i];
    }
    printf("%d\n", s);
  }
}