#include <cstdio>
using namespace std;

int a[100];

inline int min(int a, int b) {
  return a < b ? a : b;
}

inline int max(int a, int b) {
  return a > b ? a : b;
}

int make_dense(int a, int b) {
  if(b<=2*a) return 0;
  int x = a, cnt = 0;
  while(b>(x<<1)) {
    ++cnt;
    x<<=1;
  }
  return cnt;
}

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
      scanf("%d", &a[i]);
    }
    int ans = 0;
    for(int i=1; i<n; ++i) {
      ans += make_dense(min(a[i], a[i-1]), max(a[i], a[i-1]));
    }
    printf("%d\n", ans);
  }
}