#include <cstdio>
using namespace std;

#define ABS(x) ((x)<0?-(x):(x))

int main() {
  int tmp=0, i=0;
  for(i=0; i<25 && tmp!=1; ++i) scanf("%d", &tmp);
  int r=(i-1)/5, c=(i-1)%5;
  printf("%d", ABS(r-2) + ABS(c-2));
}