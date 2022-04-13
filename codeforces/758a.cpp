#include <cstdio>
using namespace std;

inline const int& Max(const int &a, const int &b) {
  return a<b?b:a;
}

int main(int argc, char* argv[]) {
  int n; scanf("%d", &n);
  int max = 0, s=0, a;
  for(int i=0; i<n; ++i) {
    scanf("%d", &a);
    max=Max(max, a);
    s += a;
  }
  printf("%d", max*n-s);
}