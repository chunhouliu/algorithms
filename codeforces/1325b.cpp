#include <cstdio>
#include <unordered_set>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    unordered_set<int> s;
    int x;
    for(int i=0; i<n; ++i) {
      scanf("%d", &x);
      s.insert(x);
    }
    printf("%d\n", s.size());
  }
}