#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int n, m;
  scanf("%d%d", &n, &m);
  int p=0;
  for(int i=n+1; i<m; ++i) {
    bool flag = true;
    for(int j=2; j<=i/2; j++) {
      if(i%j==0) {
        flag=false;
        break;
      }
    }
    if(flag) ++p;
  }
  bool flag = true;
  for(int i=2; i<=m/2; ++i) {
    if(m%i==0) {
      flag=false;
      break;
    }
  }
  printf("%s", p==0 && flag?"YES":"NO");
}