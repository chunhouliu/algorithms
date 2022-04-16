#include <cstdio>
#include <climits>
using namespace std;

#define MIN(x, y) ((x)<(y)?(x):(y))
#define MAX(x, y) ((x)<(y)?(y):(x))

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n, a;
    scanf("%d", &n);
    int x=0, y=INT_MAX;
    for(int i=0; i<n; ++i) {
      scanf("%d", &a);
      x=MAX(x, a);
      y=MIN(y, a);
    }
    printf("%d\n", x-y);
  }
}