#include <cstdio>
using namespace std;

char s[100];

int main() {
  int c = 0, n;
  scanf("%d", &n);
  while(n>0) {
    scanf("%s", s);
    switch(s[0]) {
      case 'T':
        c += 4;
        break;
      case 'C':
        c += 6;
        break;
      case 'O':
        c += 8;
        break;
      case 'D':
        c += 12;
        break;
      case 'I':
        c += 20;
        break;
    }
    --n;
  }
  printf("%d", c);
}