#include <cstdio>
using namespace std;

char s[2000];

int main() {
  int n;
  scanf("%d", &n);
  char* p = s;
  p += sprintf(p, "I hate");
  for(int i=1; i<n; ++i) {
    if(i&1) {
      p += sprintf(p, " that I love");
    } else {
      p += sprintf(p, " that I hate");
    }
  }
  sprintf(p, " it");
  printf("%s", s);
}