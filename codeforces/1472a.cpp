#include <cstdio>
using namespace std;


int main(int argc, char* arv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int w, h, n;
    scanf("%d%d%d", &w, &h, &n);
    printf("%s\n", (w-(w&(w-1)))*(h-(h&(h-1)))>=n?"YES":"NO");
  }
}