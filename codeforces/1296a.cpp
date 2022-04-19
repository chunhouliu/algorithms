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
    for(int i=0; i<n; ++i) {
      scanf("%d", &x);
      if(x&1) ++odd;
      else ++even;
    }
    if(odd==0) printf("NO\n");
    else if(even==0) printf("%s\n", n&1?"YES":"NO");
    else printf("YES\n");
  }
}