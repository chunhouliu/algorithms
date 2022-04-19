#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n, x;
    scanf("%d%d", &n, &x);
    if(n<3) printf("1\n");
    else printf("%d\n", (n-2+x-1)/x+1);
  }
}