#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(x==y) {
      if(x<z) {
        printf("NO\n");
      } else {
        printf("YES\n%d %d %d\n", x, z, 1);
      }
    } else if(x==z) {
      if(x<y) {
        printf("NO\n");
      } else {
        printf("YES\n%d %d %d\n", y, x, 1);
      }
    } else if(y==z) {
      if(y<x) {
        printf("NO\n");
      } else {
        printf("YES\n%d %d %d\n", 1, x, y);
      }
    } else {
      printf("NO\n");
    }
  }
}