#include <cstdio>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  int tmp;
  for(int i=0; i<n; ++i) {
    scanf("%d", &tmp);
    if(tmp==1) {
      printf("HARD");
      return 0;
    }
  }
  printf("EASY");
}