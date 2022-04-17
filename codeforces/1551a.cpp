#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    t--;
    int n;
    scanf("%d", &n);
    int c = (n+1)/3;
    // n = 3k+2, c = k+1, n-2*c = 3k+2-2k-2 = k+1
    // n = 3k+1, c = k, n-2*c = 3k+1-2k = k+1
    // n = 3k, c = k, n-2*c = 3k - 2k = k
    printf("%d %d\n", n-c-c, c);
  }
}