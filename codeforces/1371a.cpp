#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int x;
    scanf("%d", &x);
    printf("%d\n", x/2+(x&1));
  }
}