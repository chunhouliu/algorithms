#include <cstdio>
using namespace std;


char s[200];
int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  scanf("%s", s);
  int res=0, x=0;
  for(int i=0; i<n; ++i) {
    if(s[i]=='x') {
      ++x;
      if(x==3) {
        ++res;
        --x;
      }
    } else {
      x=0;
    }
  }
  printf("%d", res);
}