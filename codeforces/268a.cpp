#include <cstdio>
using namespace std;

int h[100] = {0};
int g[100] = {0};

int main() {
  int n; scanf("%d", &n);
  for(int i=0; i<n; ++i) scanf("%d%d", &h[i], &g[i]);
  int c = 0;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) {
      if(i==j) continue;
      if(h[i]==g[j]) ++c;
    }
  }
  printf("%d", c);
}