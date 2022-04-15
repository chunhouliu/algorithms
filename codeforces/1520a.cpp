#include <cstdio>
using namespace std;

char s[1000];

int main(int argc, char* argv[]) {
  int t, n;
  scanf("%d", &t);
  while(t>0) {
    --t;
    scanf("%d", &n);
    scanf("%s", s);
    bool flag = false;
    int idx=0;
    int ta[26]={0};
    while(idx<n) {
      char c = s[idx];
      while(idx<n && s[idx]==c) ++idx;
      if(ta[c-'A']!=0) {
        flag=true;
        break;
      }
      ta[c-'A']=1;
    }
    printf("%s\n", flag?"NO":"YES");
  }
}