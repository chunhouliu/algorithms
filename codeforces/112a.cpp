#include <cstdio>
using namespace std;

char s[1000], t[1000];

int main() {
  scanf("%s%s", s, t);
  int i = 0, res=0;
  while(s[i]!='\0') {
    char x=s[i]<'a'?s[i]+'a'-'A':s[i];
    char y=t[i]<'a'?t[i]+'a'-'A':t[i];
    if(x<y) { res=-1; break; }
    if(x>y) { res=1; break; }
    ++i;
  }
  printf("%d", res);
}