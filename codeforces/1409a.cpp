#include <cstdio>
using namespace std;


#define MAX(a, b) ((a)<(b)?(b):(a))
#define MIN(a, b) ((a)<(b)?(a):(b))

int main() {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", (MAX(a, b) - MIN(a, b) + 9)/10);
  }
}