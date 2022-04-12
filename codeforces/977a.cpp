#include <cstdio>
using namespace std;

int main() {
  int n, k; scanf("%d%d", &n, &k);
  while(k>0) {
    if(n%10==0) n/=10;
    else --n;
    --k;
  }
  printf("%d", n);
}