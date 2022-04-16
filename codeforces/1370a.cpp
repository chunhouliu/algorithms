#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    printf("%d\n", n/2);
  }
}