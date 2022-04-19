#include <cstdio>
using namespace std;


int value(int i, int j) {
  if(i==0) return 1;
  if(j==0) return 1;
  return value(i-1, j) + value(i, j-1);
}

int main(int argc, char* argv[]) {
  int n;
  scanf("%d", &n);
  printf("%d", value(n-1, n-1));
}