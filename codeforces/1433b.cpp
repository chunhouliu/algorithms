#include <cstdio>
using namespace std;

inline int min(int a, int b) {
  return a < b ? a : b;
}

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, x;
    scanf("%d", &n);
    int f = -1, l = -1, s = 0, p = -1;
    for(int i=0; i<n; ++i) {
      scanf("%d", &x);
      if(x==1) {
        s += i-p-1;
        if(f==-1) f=i;
        p=i;
      }
    }
    if(x==1) l=0;
    else l=n-1-p;
    s += l;
    printf("%d\n", s-l-f);
  }
}