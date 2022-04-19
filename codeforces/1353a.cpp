#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", n==1?0:n==2?m:2*m);
  }
}