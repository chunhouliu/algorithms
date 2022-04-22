#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a==0?1:a+b*2+1);
  }
}