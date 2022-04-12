#include <cstdio>
using namespace std;

char s[1000];

int main() {
  scanf("%s", s);
  int i=0, t=0, f=0;
  while(s[i]!='\0') {
    int k = s[i]-'a';
    if(((f>>k)&1)==0) {
      ++t;
      f |= 1<<k;
    }
    ++i;
  }
  if(t&1) printf("IGNORE HIM!");
  else printf("CHAT WITH HER!");
}