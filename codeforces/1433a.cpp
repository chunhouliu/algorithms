#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int x;
    scanf("%d", &x);
    int line = x%10 - 1;
    int column = 0;
    while(x!=0) {
      ++column;
      x/=10;
    }
    printf("%d\n", line*10 + (1+column)*column/2);
  }
}