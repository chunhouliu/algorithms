#include <cstdio>
#include <cmath>
using namespace std;

inline int min(int x, int y) {
  return x < y ? x : y;
}

inline int distance(char x, char y) {
  return min(abs(x-y), 10-abs(x-y));
}

char s[2000], t[2000];

int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  scanf("%s", s);
  scanf("%s", t);
  int cnt = 0;
  for(int i=0; s[i]!='\0'; ++i) {
    cnt += distance(s[i], t[i]);
  }
  printf("%d\n", cnt);
}