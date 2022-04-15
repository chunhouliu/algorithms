#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
  int n, m, c, a=0, b=0;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) {
    scanf("%d%d", &m, &c);
    if(m>c)++a;
    else if(m<c) ++b;
  }
  printf("%s", a>b?"Mishka":a<b?"Chris":"Friendship is magic!^^");
}