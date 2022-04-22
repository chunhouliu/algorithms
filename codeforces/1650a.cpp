#include <cstdio>
#include <iostream>
using namespace std;


char s[100];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    scanf("%s", s);
    char x;
    cin >> x;
    bool flag = false;
    for(int i=0; s[i]!='\0'; ++i) {
      if(s[i]!=x) continue;
      if(i%2==0) {
        flag=true;
        break;
      }
    }
    printf("%s\n", flag?"YES":"NO");
  }
}