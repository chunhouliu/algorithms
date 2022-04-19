#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  int cnt = 1;
  for(int l=2; l*l<=n; ++l) {
    if(n%l==0 && n/l>1) {
        cnt++;
        if(l*l<n) cnt++;
    }
  }
  printf("%d\n", cnt);
}