#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
  int n, m, k;
  scanf("%d%d%d", &n, &m, &k);
  printf("%s", m>=n && k>=n ? "YES":"NO");
}