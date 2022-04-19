/*
  LCM(x, y) = px = qy, p>q, p>1, q>=1
  1. r<2l, as x>=l, p>1, px>=2l, such LCM(x, y) not exists
  2. r>=2l, x=l, y=2l, LCM(x, y)=2l
*/
#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    long long l, r;
    scanf("%lld%lld", &l, &r);
    if(r<(l<<1)) printf("-1 -1\n");
    else printf("%lld %lld\n", l, l<<1);
  }
}