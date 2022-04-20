#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int s = 0, x;
    for(int i=0; i<n; ++i) {
      scanf("%d", &x);
      s += x;
    }
    if(s>n) printf("%d\n", s-n);
    else printf("%d\n", s==n?0:1);
  }
}