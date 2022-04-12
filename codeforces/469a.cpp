#include <cstdio>
using namespace std;

int nums[200] = {0};

int main() {
  int n, p, x;
  scanf("%d", &n);
  scanf("%d", &p);
  for(int i=0; i<p; ++i) {
    scanf("%d", &x);
    nums[x] = 1;
  }
  scanf("%d", &p);
  for(int i=0; i<p; ++i) {
    scanf("%d", &x);
    nums[x] = 1;
  }
  for(int i=1; i<=n; ++i)
    if(!nums[i]) {
      printf("Oh, my keyboard!");
      return 0;
    }
  printf("I become the guy.");
}