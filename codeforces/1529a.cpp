#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int m=101, x, cnt=0;
    for(int i=0; i<n; ++i) {
      scanf("%d", &x);
      if(x<m) {
        m=x;
        cnt=0;
      }
      if(x==m) ++cnt;
    }
    printf("%d\n", n-cnt);
  }
}