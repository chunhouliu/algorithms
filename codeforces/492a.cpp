#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  int s = 0, t = 0;
  for(int i=1; i<500; ++i) {
    t += i;
    s += t;
    if(s>n) {
      printf("%d", i-1);
      break;
    }
  }
}