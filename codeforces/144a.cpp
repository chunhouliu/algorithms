#include <cstdio>
using namespace std;

int a[200];

int main() {
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) scanf("%d", &a[i]);
  int max_index=0, min_index=0;
  for(int i=1; i<n; ++i) {
    if(a[i]>a[max_index]) max_index=i;
    if(a[i]<=a[min_index]) min_index = i;
  }
  if(a[max_index]==a[min_index]) {
    printf("0");
  } else {
    int k1 = max_index, k2 = n - min_index - 1;
    printf("%d", max_index>min_index?k1+k2-1:k1+k2);
  }
}