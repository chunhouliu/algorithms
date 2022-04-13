#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    int n; scanf("%d", &n);
    if(n/2%2==1) {
      printf("NO\n");
      continue;
    } 
    printf("YES\n");
    int s = 0;
    for(int i=2; i<=n; i+=2) {
      printf("%d ", i);
      s += i;
    }
    for(int i=0; i<n/2-1; ++i) {
      printf("%d ", 2*i+1);
      s -= 2*i+1;
    }
    printf("%d\n", s);
  }
}