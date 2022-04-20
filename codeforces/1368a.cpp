// fibnacci sequence
#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    long long int a, b, n;
    scanf("%lld%lld%lld", &a, &b, &n);
    if(a<b) {
      a^=b;
      b^=a;
      a^=b;
    }
    int step = 0;
    while(a<=n) {
      int t=a;
      a+=b;
      b=t;
      ++step;
    }
    printf("%d\n", step);
  }
}