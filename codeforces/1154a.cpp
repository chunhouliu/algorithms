#include <cstdio>
#include <algorithm>
using namespace std;


int x[4];

int main(int argc, char** argv) {
  scanf("%d%d%d%d", &x[0], &x[1], &x[2], &x[3]);
  sort(x, x+4);
  printf("%d %d %d\n", x[3]-x[0], x[3]-x[1], x[3]-x[2]);
}