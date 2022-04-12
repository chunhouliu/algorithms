#include <cstdio>
using namespace std;

char s[1000];

int main() {
  int d; scanf("%d", &d);
  scanf("%s", s);
  char c = s[0]; 
  int t = 0, i=1;
  while(s[i]!='\0') {
    if(s[i]==c) ++t;
    else c=s[i];
    ++i;
  }
  printf("%d", t);
}