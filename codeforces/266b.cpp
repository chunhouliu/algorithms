#include <cstdio>
using namespace std;

char s[100];

int main() {
  int n, t; scanf("%d%d", &n, &t);
  scanf("%s", s);
  while(t>0) {
    int i=n-1;
    while(i>0) {
      if(s[i]=='G' && s[i-1]=='B') {
        s[i]='B'; s[i-1]='G';
        i-=2;
      } else --i;
    }
    --t;
  }
  printf("%s", s);
}