#include <cstdio>
#include <algorithm>
using namespace std;

int a[100];

int main(int argc, char* argv[]) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    int n; scanf("%d", &n);
    for(int i=0; i<n; ++i) scanf("%d", &a[i]);
    sort(a, a+n);
    int remain = 0;
    for(int i=1; i<n; ++i) {
      if(a[i]==a[i-1] || a[i]==a[i-1]+1) continue;
      ++remain;
    }
    printf("%s\n", (remain==0?"YES":"NO"));
  }
}