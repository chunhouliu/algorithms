#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    long long n;
    scanf("%lld", &n);

    int cnt = 0;
    for(long long x=n; x!=0; x/=10) ++cnt;
    int x = (cnt-1)*9;
    long long b=0;
    for(int i=0; i<cnt; ++i) b=b*10+1;
    for(int i=1; i<10; ++i) {
      if(i*b<=n) ++x;
    }

    printf("%d\n", x);
  }
}