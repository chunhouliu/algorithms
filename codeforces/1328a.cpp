#include <cstdio>
using namespace std;

int main() {
  int t, a, b;
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%d%d", &a, &b);
    printf("%d\n", (b-a%b)%b);
  }
}