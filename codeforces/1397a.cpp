#include <cstdio>
using namespace std;

char s[2000];
int main(int argc, char* argv[]) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    int cnt[26]={0};
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
      scanf("%s", s);
      for(int j=0; s[j]!='\0'; ++j) {
        ++cnt[s[j]-'a'];
      }
    }
    bool flag = true;
    for(int i=0; i<26; ++i) {
      if(cnt[i]%n!=0) {
        flag=false;
        break;
      }
    }
    printf("%s\n", flag?"YES":"NO");
  }
}