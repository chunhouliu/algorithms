#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int h, m;
    scanf("%d%d", &h, &m);
    printf("%d\n", 1440-h*60-m);
  }
}