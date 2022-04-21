#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    long long int n, m, x;
    scanf("%lld%lld%lld", &n, &m, &x);
    long long int j = (x-1) / n, i = (x-1) % n;
    printf("%lld\n", i*m+j+1);
  }
}