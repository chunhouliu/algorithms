#include <cstdio>
using namespace std;

char s[1000][10];

int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) scanf("%s", s[i]);
  bool flag = false;
  for(int i=0; i<n; ++i) {
    if(s[i][0]=='O' && s[i][1]=='O') {
      flag=true;
      s[i][0]='+';
      s[i][1]='+';
      break;
    }
    if(s[i][3]=='O' && s[i][4]=='O') {
      flag=true;
      s[i][3]='+';
      s[i][4]='+';
      break;
    }
  }
  if(flag) {
    printf("YES\n");
    for(int i=0; i<n; ++i) printf("%s\n", s[i]);
  } else {
    printf("NO");
  }
}