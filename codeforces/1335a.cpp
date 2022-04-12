#include <cstdio>
using namespace std;

int main() {
  int t,n;
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%d", &n);
    printf("%d\n", n/2-(1-(n&1)));
  }
}