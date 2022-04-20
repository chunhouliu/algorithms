#include <cstdio>
#include <algorithm>
using namespace std;


int a[1000];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, d;
    scanf("%d%d", &n, &d);
    for(int i=0; i<n; ++i) {
      scanf("%d", &a[i]);
    }
    sort(a, a+n);
    if(d>=a[n-1]) printf("YES\n");
    else {
      if(a[0]+a[1]<=d)printf("YES\n");
      else printf("NO\n");
    }
  }
}