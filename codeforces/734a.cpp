#include <cstdio>
using namespace std;

char s[200000];

int main() {
  int n; scanf("%d", &n);
  scanf("%s", s);
  int a=0, d=0;
  int i=0;
  while(s[i]!='\0') {
    if(s[i]=='A') ++a;
    else ++d;
    ++i;
  }
  printf("%s", a>d?"Anton":a<d?"Danik":"Friendship");
}