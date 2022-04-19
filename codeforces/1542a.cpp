#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    int odd=0, even=0, x;
    for(int i=0; i<(n<<1); ++i) {
      scanf("%d", &x);
      if(x&1)++odd;
      else ++even;
    }
    printf("%s\n", odd==even?"YES":"NO");
  }
}