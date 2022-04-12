#include <cstdio>
using namespace std;

char s[200];

int main() {
  int n; scanf("%d", &n);
  scanf("%s", s);
  int x = 0;
  for(int i=0; s[i]!='\0'; ++i) {
    char c = s[i]>='A' && s[i]<='Z'?s[i]-'A'+'a':s[i];
    x |= 1<<(c-'a');
  }
  int cnt = 0;
  while(x!=0) {
    cnt += x&1;
    x>>=1;
  }
  printf("%s", cnt==26?"YES":"NO");
}