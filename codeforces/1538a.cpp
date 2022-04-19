#include <cstdio>
using namespace std;


#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)<(b)?(b):(a))

int a[1000];

int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t>0) {
    --t;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
      scanf("%d", &a[i]);
    }
    int minIndex=0, maxIndex=0;
    for(int i=1; i<n; ++i) {
      if(a[i]<a[minIndex])minIndex=i;
      if(a[i]>a[maxIndex])maxIndex=i;
    }
    printf("%d\n", MIN(MAX(minIndex, maxIndex)+1, MIN(n-MIN(minIndex, maxIndex), n-MAX(minIndex, maxIndex)+MIN(minIndex, maxIndex)+1)));
  }
}