#include <cstdio>
using namespace std;

char s[200];
int cnt[26] = {0};
int cnt2[26] = {0};

int main() {
  scanf("%s", s);
  for(int i=0; s[i]!='\0'; ++i) ++cnt[s[i]-'A'];
  scanf("%s", s);
  for(int i=0; s[i]!='\0'; ++i) ++cnt[s[i]-'A'];
  scanf("%s", s);
  for(int i=0; s[i]!='\0'; ++i) ++cnt2[s[i]-'A'];
  for(int i=0; i<26; ++i) {
    if(cnt[i]!=cnt2[i]) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");
}