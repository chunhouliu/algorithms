#include <cstdio>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  char st[1000];
  int v = 0;
  while(n>0) {
    --n;
    scanf("%s", st);
    if(st[0]=='+' || st[1]=='+') ++v;
    else --v;
  }
  printf("%d", v);
}