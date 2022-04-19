#include <cstdio>
using namespace std;

#define ABS(x) ((x)<0?-(x):(x))
#define MIN(a, b) ((a)<(b)?(a):(b))

int fromto(char x, char t) {
  return MIN(ABS(x-t), 26-ABS(x-t));
}

char s[1000];

int main(int argc, char* argv[]) {
  scanf("%s", s);
  char x = 'a';
  int c = 0;
  for(int i=0; s[i]!='\0'; ++i) {
    c += fromto(x, s[i]);
    x = s[i];
  }
  printf("%d", c);
}