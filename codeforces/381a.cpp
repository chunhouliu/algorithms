#include <cstdio>
using namespace std;


int c[1500];

int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) scanf("%d", &c[i]);
  int s=0, d=0, lf=0, rh=n-1;
  while(lf<=rh) {
    if(c[lf]>c[rh]) {
      s+=c[lf];
      lf++;
    } else {
      s+=c[rh];
      rh--;
    }
    if(lf<=rh) {
      if(c[lf]>c[rh]) {
      d+=c[lf];
      lf++;
      } else {
        d+=c[rh];
        rh--;
      }
    }
  }
  printf("%d %d", s, d);
}