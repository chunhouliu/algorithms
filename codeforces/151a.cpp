#include <cstdio>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))

int main(int argc, char* argv[]) {
  int n, k, l, c, d, p, nl, np;
  scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
  int t = k*l/(n*nl);
  t=MIN(t, c*d/n);
  t=MIN(t, p/(n*np));
  printf("%d", t);
}