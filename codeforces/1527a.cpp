#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    // get highest
    int p=n;
    do {
      p=n;
      n&=n-1;  // eliminate least 1 digit
    } while(n!=0);
    printf("%d\n", p-1);
  }
}