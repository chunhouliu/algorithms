#include <cstdio>
using namespace std;

char s[100];

int main() {
  scanf("%s", s);
  int i=0, c=0;
  while(s[i]!='\0') {
    if(s[i]=='4' || s[i]=='7') ++c;
    ++i;
  }
  printf("%s", (c==4 || c==7)?"YES":"NO");
}