#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
  int t, x, y, n;
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%d%d%d", &x, &y, &n);
    int v = n/x*x + y;
    if(v > n) v -= x;
    printf("%d\n", v);
  }
}