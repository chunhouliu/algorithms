#include <cstdio>
#include <cstring>
using namespace std;

char s[90][90];

int main() {
  int n, m; scanf("%d%d", &n, &m);
  for(int i=0; i<n; ++i) {
    memset(s[i], '.', m);
    s[i][m]='\0';
  }
  for(int i=0; i<n; i+=2) {
    memset(s[i], '#', m);
  }
  for(int i=1; i<n; i+=4) s[i][m-1]='#';
  for(int i=3; i<n; i+=4) s[i][0]='#';
  for(int i=0; i<n; ++i) printf("%s\n", s[i]);
}