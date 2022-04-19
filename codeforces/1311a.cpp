#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int a, b;
    scanf("%d%d", &a, &b);
    int s=0;
    if(a>b) {
      if(((a-b)&1)==1) {
        s = 2;
      } else {
        s = 1;
      }
    }
    if(a<b) {
      if(((a-b)&1)==1) {
        s = 1;
      } else {
        s = 2;
      }
    }
    printf("%d\n", s);
  }
}