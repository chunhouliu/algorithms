#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  printf("%d\n", n/2);
  for(int i=0; i<n/2-1; ++i) {
    printf("2 ");
  }
  printf("%d", 2+(n&1));
}