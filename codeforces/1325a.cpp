// gcd(1, x-1) + lcm(1, x-1) = 1 + x-1 = x
#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int x;
    scanf("%d", &x);
    printf("1 %d\n", x-1);
  }
}