#include <cstdio>
using namespace std;

#define ABS(a) ((a)<0?-(a):(a))

char s[100];
int idx[100];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    scanf("%s", s);
    for(int i=0; s[i]!='\0'; ++i) {
      idx[s[i]-'a']=i;
    }
    scanf("%s", s);
    int c = 0;
    for(int i=1; s[i]!='\0'; ++i) {
      int x = idx[s[i]-'a'], y = idx[s[i-1]-'a'];
      c += ABS(x-y);
    }
    printf("%d\n", c);
  }
}