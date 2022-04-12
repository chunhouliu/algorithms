#include <cstdio>
using namespace std;

char s[200], t[200];

int main() {
  scanf("%s%s", s, t);
  for(int i=0; s[i]!='\0'; ++i) {
    char a=s[i], b=t[i];
    if(a==b) printf("0");
    else printf("1");
  }
}