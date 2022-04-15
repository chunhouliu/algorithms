#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
  int t, n, a; 
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%d", &n);
    int x[2] = {0, 0};
    for(int i=0; i<n; ++i) {
      scanf("%d", &a);
      if((i&1)!=(a&1)) x[i&1]++;
    }
    if(x[0]==x[1]) printf("%d\n", x[0]);
    else printf("-1\n");
  }
}