#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    for(int i=0, x=1; i<n; ++i, x+=2) {
      printf("2 ", x);
    }
    printf("\n");
  }
}