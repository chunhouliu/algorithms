#include <cstdio>
#include <algorithm>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))

int s[100];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; ++i) scanf("%d", &s[i]);
    sort(s, s+n);
    int x = s[1]-s[0];
    for(int i=2; i<n; ++i) {
      x=MIN(x, s[i]-s[i-1]);
    }
    printf("%d\n", x);
  }
}