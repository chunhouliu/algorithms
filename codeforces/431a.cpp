#include <cstdio>
using namespace std;


char s[110000];
int a[4];

int main(int argc, char* argv[]) {
  scanf("%d", &a[0]);
  scanf("%d", &a[1]);
  scanf("%d", &a[2]);
  scanf("%d", &a[3]);
  scanf("%s", s);
  int t = 0;
  for(int i=0; s[i]!='\0'; ++i) t += a[s[i]-'1'];
  printf("%d", t);
}