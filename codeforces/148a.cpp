#include <cstdio>
using namespace std;

int drag[100010] = {0};

int main() {
  int k, l, m, n, d;
  scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
  for(int i=1; k*i<=d; ++i) drag[k*i] = 1;
  for(int i=1; l*i<=d; ++i) drag[l*i] = 1;
  for(int i=1; m*i<=d; ++i) drag[m*i] = 1;
  for(int i=1; n*i<=d; ++i) drag[n*i] = 1;
  int c = 0;
  for(int i=1; i<=d; ++i) c+=drag[i];
  printf("%d", c);
}