// A+B+C, B+C, A+C -> A, B
#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int b[7];
    for(int i=0; i<7; ++i) scanf("%d", &b[i]);
    printf("%d %d %d\n", b[6]-b[5], b[6]-b[4], b[4]+b[5]-b[6]);
  }
}