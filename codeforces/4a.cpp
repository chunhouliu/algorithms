#include <cstdio>
using namespace std;

int main() {
  int w; scanf("%d", &w);
  printf("%s", (w>2 && w%2==0?"YES":"NO"));
}