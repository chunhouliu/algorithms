#include <cstdio>
using namespace std;

int main() {
  int n, c=0, x=0,t;
  scanf("%d", &n);
  while(n>0) {
    --n;
    scanf("%d", &t);
    if(t==-1) {
      if(x==0) ++c;
      else x-=1;
    } else x += t;
  }
  printf("%d", c);
}