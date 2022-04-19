#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n, x;
    bool flag[100] = {false};
    scanf("%d", &n);
    for(int i=0; i<(n<<1); ++i) {
      scanf("%d", &x);
      if(flag[x]) continue;
      flag[x]=true;
      printf("%d ", x);
    }
    printf("\n");
  }
}