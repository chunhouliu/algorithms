#include <cstdio>
using namespace std;

int main() {
  int a, b; scanf("%d%d", &a, &b);
  int y = 0;
  while(a<=b) {
    a=(a<<1)+a; b<<=1;
    ++y;
  }
  printf("%d", y);
}