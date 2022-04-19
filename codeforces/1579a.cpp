#include <cstdio>
using namespace std;

char s[100];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%s", s);
    int a=0, b=0, c=0;
    for(int i=0; s[i]!='\0'; ++i) {
      if(s[i]=='A')++a;
      else if(s[i]=='B')++b;
      else ++c;
    }
    printf("%s\n", b==a+c?"YES":"NO");
  }
}