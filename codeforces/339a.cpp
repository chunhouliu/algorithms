#include <cstdio>
using namespace std;

int cnt[10] = {0};
char s[1000];

int main() {
  scanf("%s", s);
  int i=0;
  while(s[i]!='\0') {
    if(s[i]!='+') {
      cnt[s[i]-'0']++;
    }
    ++i;
  }
  i = 0;
  for(int x=1; x<=3; ++x) {
    while(cnt[x]>0) {
      s[i]='0'+x;
      s[i+1]='+';
      i+=2; --cnt[x];
    }
  }
  if(i>0) s[i-1]='\0';
  printf("%s", s);
}