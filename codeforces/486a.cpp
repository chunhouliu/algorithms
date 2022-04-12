#include <cstdio>
using namespace std;

int main() {
  long long n; scanf("%lld", &n);
  printf("%lld", n&1?n/2-n:n/2);
}