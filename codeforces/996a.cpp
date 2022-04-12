#include <cstdio>
using namespace std;

int main() {
  int a[] = {1, 5, 10, 20, 100};
  int n; scanf("%d", &n);
  int cnt = 0;
  for(int i=4; i>=0; --i) {
    cnt += n / a[i];
    n %= a[i];
  }
  printf("%d", cnt);
}