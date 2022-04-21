#include <cstdio>
using namespace std;

int a[200000];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int s = 0;
    for(int i=0; i<n; ++i) {
      scanf("%d", &a[i]);
      s += a[i];
    }
    if(s%n!=0) {
      printf("-1\n");
      continue;
    }
    int avg = s / n, cnt = 0;
    for(int i=0; i<n; ++i) {
      if(a[i]>avg) ++cnt;
    }
    printf("%d\n", cnt);
  }
}