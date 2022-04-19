#include <cstdio>
#include <cstring>
using namespace std;

char s[1000];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%s", s);
    int n = strlen(s);
    if(n&1) { printf("NO\n"); continue; }
    const char* x = "YES";
    for(int i=0, j=n/2; s[j]!='\0'; ++i, ++j) {
      if(s[i]!=s[j]) {
        x = "NO";
        break;
      }
    }
    printf("%s\n", x);
  }
}