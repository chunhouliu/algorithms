#include <cstdio>
using namespace std;

char s[1000];

int main() {
  scanf("%s", s);
  int i=0, u=0, l=0;
  while(s[i]!='\0') {
    if(s[i]<'a') ++u;
    else ++l;
    ++i;
  }
  i=0;
  if(u>l) {
    while(s[i]!='\0') {
      if(s[i]>='a') s[i]=s[i]-'a'+'A';
      ++i;
    }
  } else {
    while(s[i]!='\0') {
      if(s[i]<'a') s[i]=s[i]-'A'+'a';
      ++i;
    }
  }
  printf("%s", s);
}