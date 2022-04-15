#include <cstdio>
using namespace std;

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)<(b)?(b):(a))

int main(int argc, char* argv[]) {
  int t, a, b;
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%d%d", &a, &b);
    int res = MAX(a, b+b) * MAX(a, b+b);
    res=MIN(res, MAX(a+a, b)*MAX(a+a, b));
    res=MIN(res, MAX(a+b, a)*MAX(a+b, a));
    res=MIN(res, MAX(a+b, b)*MAX(a+b, b));
    printf("%d\n", res);
  }
}