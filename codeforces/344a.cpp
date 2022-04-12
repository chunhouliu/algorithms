#include <cstdio>
using namespace std;

char s[10];

int main() {
  int n; scanf("%d", &n);
  scanf("%s", s);
  int g = 1;
  char p = s[1];
  for(int i=1; i<n; ++i) {
    scanf("%s", s);
    if(s[0]==p) ++g;
    p = s[1];
  }
  printf("%d", g);
}