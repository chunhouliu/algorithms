#include <cstdio>
using namespace std;

int main() {
  int s[4];
  scanf("%d%d%d%d", &s[0], &s[1], &s[2], &s[3]);
  int c = 0;
  for(int i=0; i<4; ++i) {
    bool flag = false;
    for(int j=0; j<i; ++j) {
      if(s[i]==s[j]) {
        flag=true;
        break;
      }
    }
    if(!flag) ++c;
  }
  printf("%d", 4-c);
}