#include <cstdio>
using namespace std;

int main() {
  int n, x, t=0;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) {
    scanf("%d", &x);
    t += x;
  }
  printf("%f", double(t)/n);
}