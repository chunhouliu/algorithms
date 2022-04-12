#include <cstdio>
using namespace std;

#define MAX(a, b) ((a)<(b)?(b):(a))
#define MIN(a, b) ((a)<(b)?(a):(b))

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d %d", MIN(a, b), (MAX(a, b)-MIN(a, b))/2);
}