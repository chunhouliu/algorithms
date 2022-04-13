#include <cstdio>
using namespace std;

char s[1000];
char q[1000];

int main(int argc, char* argv[]) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%s", s);
    int i=0, j=0;
    while(s[i]!='\0') {
      q[j++]=s[i++];
      i++;
    }
    q[j]=s[i-1];
    q[j+1]='\0';
    printf("%s\n", q);
  }
}