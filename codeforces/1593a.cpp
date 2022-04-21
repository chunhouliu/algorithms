#include <cstdio>
using namespace std;

inline int max(int a, int b) {
  return a < b ? b : a;
}

int x[3];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    scanf("%d%d%d", &x[0], &x[1], &x[2]);
    int y = max(x[0], max(x[1], x[2]));
    int cnt = 0;
    if(x[0]==y) ++cnt;
    if(x[1]==y) ++cnt;
    if(x[2]==y) ++cnt;
    if(cnt==1) {
      printf("%d %d %d\n", x[0]==y?0:y+1-x[0], x[1]==y?0:y+1-x[1], x[2]==y?0:y+1-x[2]);
    } else {
      printf("%d %d %d\n", x[0]==y?1:y+1-x[0], x[1]==y?1:y+1-x[1], x[2]==y?1:y+1-x[2]);
    }
  }
}