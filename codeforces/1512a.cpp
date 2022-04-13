#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    int n; scanf("%d", &n);
    int a, b, x, an=1, bn=0, aindex=1, bindex;
    scanf("%d", &a);
    for(int i=1; i<n; ++i) {
      scanf("%d", &x);
      if(x==a) {
        ++an;
      } else {
        b=x;
        ++bn;
        bindex=i+1;
      }
    }
    printf("%d\n", an==1?aindex: bindex);
  }
}