#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
  int n, k; scanf("%d%d", &n, &k);
  int c = 0, x;
  for(int i=0; i<n; ++i) {
    scanf("%d", &x);
    if(x+k>5) continue;
    ++c;
  }
  printf("%d", c/3);
}