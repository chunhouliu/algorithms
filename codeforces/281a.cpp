#include <cstdio>
using namespace std;

char s[2000];

int main() {
  scanf("%s", s);
  s[0]=s[0]>='a'?s[0]+'A'-'a':s[0];
  printf("%s", s);
}