#include <cstdio>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)<(b)?(b):(a))
#define ABS(x) ((x)<0?-(x):(x))

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int x[3], y[3];
    scanf("%d%d", &x[0], &y[0]);
    scanf("%d%d", &x[1], &y[1]);
    scanf("%d%d", &x[2], &y[2]);
    if(x[0]==x[1] && x[0]==x[2] && y[2]>MIN(y[0], y[1]) && y[2]<MAX(y[0], y[1])) {
      // same column
      printf("%d\n", ABS(y[1]-y[0])+2);
    } else if(y[0]==y[1] && y[0]==y[2] && x[2]>MIN(x[0], x[1]) && x[2]<MAX(x[0], x[1])) {
      printf("%d\n", ABS(x[1]-x[0])+2);
    } else {
      printf("%d\n", ABS(x[1]-x[0])+ABS(y[1]-y[0]));
    }
  }
}