#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  if(n&1) {
    printf("-1");
    return 0;
  }
  for(int i=1; i<=n; ++i) {
    printf("%d ", n+1-i);
  }
}