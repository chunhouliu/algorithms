#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int n; scanf("%d", &n);
  if((n&1)==0) {
    // even
    printf("%d %d", 4, n-4);
  } else {
    // odd
    printf("%d %d", 9, n-9);
  }
}