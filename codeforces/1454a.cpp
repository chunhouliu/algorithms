#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    int n;
    scanf("%d", &n);
    printf("%d", n);
    for(int i=1; i<n; ++i) {
      printf(" %d", i);
    }
    printf("\n");
    --t;
  }
}