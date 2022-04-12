#include <cstdio>
using namespace std;

#define MAX(a, b) ((a)<(b)?(b):(a))
#define MIN(a, b) ((a)<(b)?(a):(b))


int main(int argc, char** argv) {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("%d\n", MAX(a, MAX(b, c))-MIN(a, MIN(b, c)));
}