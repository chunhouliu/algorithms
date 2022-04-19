#include <cstdio>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)<(b)?(b):(a))

int s[4];

int main(int argc, char* argv[]) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%d%d%d%d", &s[0], &s[1], &s[2], &s[3]);
    if(MIN(s[0], s[1])>MAX(s[2], s[3]) || MIN(s[2], s[3])>MAX(s[0], s[1])) printf("NO\n");
    else printf("YES\n");
  }
}