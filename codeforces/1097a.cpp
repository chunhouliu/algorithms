#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  char x[3], y[3];
  scanf("%s", x);
  int cnt = 0;
  for(int i=0; i<5; ++i) {
    scanf("%s", y);
    if(x[0]==y[0] || x[1]==y[1]) ++cnt;
  }
  printf("%s", cnt>0?"YES":"NO");
}