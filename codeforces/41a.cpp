#include <cstdio>
#include <cstring>
using namespace std;


char s[1000];
char t[1000];

int main() {
  scanf("%s", s);
  scanf("%s", t);
  int n = strlen(s), m = strlen(t);
  if(m!=n) printf("NO");
  else {
    int i=0, j=n-1;
    while(i<n) {
      if(s[i]!=t[j]) {
        printf("NO");
        return 0;
      }
      ++i; --j;
    }
    printf("YES");
  }
}