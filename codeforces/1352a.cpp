#include <cstdio>
using namespace std;

int k[100];

int main(int argc, char** argv) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    int n; scanf("%d", &n);
    int i = 0, cnt=0;
    while(n!=0) {
      if(n%10!=0) ++cnt;
      k[i]=n%10;
      n/=10;
      ++i;
    }
    printf("%d\n", cnt);
    int p = 1;
    for(int x=0; x<i; ++x) {
      if(k[x]!=0) {
        printf("%d ", p*k[x]);
      }
      p*=10;
    }
    printf("\n");
  }
}