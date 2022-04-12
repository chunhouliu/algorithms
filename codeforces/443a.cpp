#include <cstdio>
using namespace std;

char s[2000];

int main() {
  bool flag = true;
  int x = 0;
  while(flag) {
    scanf("%s", s);
    for(int i=0; s[i]!='\0'; ++i) {
      if(s[i]>='a' && s[i]<='z') {
        x |= (1<<(s[i]-'a'));
      }
      if(s[i]=='}') flag=false;
    }
  }
  int cnt = 0;
  while(x!=0) {
    cnt += (x&1);
    x>>=1;
  }
  printf("%d", cnt);
}