#include <cstdio>
using namespace std;

int main() {
  int n, h, x, w=0; scanf("%d%d", &n, &h);

  for(int i=0; i<n; ++i) {
    scanf("%d", &x);
    if(x>h) w+=2;
    else ++w;
  }
  printf("%d", w);
}