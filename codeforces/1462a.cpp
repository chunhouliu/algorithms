#include <cstdio>
using namespace std;


int a[500], b[500];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; ++i) scanf("%d", &a[i]);
    int turn = n-1, l=0, r=n-1;
    for(int i=0; i<n; ++i) {
      b[i]=a[turn^l^r];
      if(turn==l) {
        --r;
        turn=r;
      } else {
        ++l;
        turn=l;
      }
    }
    for(int i=0; i<n; ++i) printf("%d ", b[i]);
    printf("\n");
  }
}