#include <cstdio>
using namespace std;

char s[1000];

int main(int argc, char* argv[]) {
  scanf("%s", s);
  int i = 0;
  while(s[i]!='\0') {
    if(s[i]=='.') {
      printf("0");
      ++i;
    } else {
      ++i;
      if(s[i]=='.') printf("1");
      else printf("2");
      ++i;
    }
  }
}