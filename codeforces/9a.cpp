#include <cstdio>
using namespace std;

#define MAX(a, b) ((a)<(b)?(b):(a))

int main(int argc, char* argv[]) {
  int y, w;
  scanf("%d%d", &y, &w);
  int x = 7 - MAX(y, w);
  switch(x) {
    case 1:
      printf("1/6");
      break;
    case 2:
      printf("1/3");
      break;
    case 3:
      printf("1/2");
      break;
    case 4:
      printf("2/3");
      break;
    case 5:
      printf("5/6");
      break;
    case 6:
      printf("1/1");
      break;
    default:
      printf("0/1");
      break;
  }
}