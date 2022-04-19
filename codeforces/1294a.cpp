#include <cstdio>
using namespace std;

#define MAX(a, b) ((a)<(b)?(b):(a))

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    long long a, b, c, n;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &n);
    if((a+b+c+n)%3==0 && MAX(a, MAX(b, c)) <= (a+b+c+n)/3)printf("YES\n");
    else printf("NO\n");
  }
}