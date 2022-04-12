#include <cstdio>
using namespace std;

int main() {
  int y; scanf("%d", &y);
  ++y;
  while(y<10000) {
    int ds[4];
    ds[0]=y/1000; ds[1]=y%1000/100; ds[2]=y%100/10; ds[3]=y%10;
    if(ds[0]!=ds[1] && ds[0]!=ds[2] && ds[0]!=ds[3] && ds[1]!=ds[2] && ds[1]!=ds[3] && ds[2]!=ds[3]) {
      printf("%d", y);
      break;
    }
    ++y;
  }
}