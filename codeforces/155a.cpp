#include <cstdio>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  int max, min;
  scanf("%d", &max); min=max;
  int x, c=0;
  for(int i=1; i<n; ++i) {
    scanf("%d", &x);
    if(x>max) {
      ++c;
      max=x;
    } else if(x<min) {
      ++c;
      min=x;
    }
  }
  printf("%d", c);
}