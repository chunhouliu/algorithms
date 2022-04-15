#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int t; scanf("%d", &t);
  while(t>0) {
    --t;
    int k; scanf("%d", &k);
    int i=1, idx=1;
    while(idx<k) {
        ++i;
        if(i%3!=0 && i%10!=3) ++idx;
    }
    printf("%d\n", i);
  }
}