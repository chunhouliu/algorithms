#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    int a=0, b=0, x;
    for(int i=0; i<n; ++i) {
      scanf("%d", &x);
      if(x==1) ++a;
      else ++b;
    }
    printf("%s\n", a%2==1 || b%2==1 && a==0 ? "NO":"YES");
  }
}